class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>left(n,-1);
        vector<int>right(n,-1);
        stack<int>st;
    //left wla min limit
        for(int i = 0; i < n; i++){
            if(st.empty()){
                st.push(i);
                left[i]=0;
                }
            else{
                //top pe valuse greate hai to pop karte jao untill found valuse less than top
                while(!st.empty() && heights[st.top()]>=heights[i]) {
                    st.pop();
                }
                 if(st.empty()){
                    left[i]=0;
                 }
                 else{
                    left[i]=st.top()+1;
                 }
                 st.push(i);
            }
        }
        stack<int>st2;
        for(int i = n-1; i >=0 ; i--){
            if(st2.empty()){
                st2.push(i);
                right[i]=n-1;
            }
            else{
                while(!st2.empty() && heights[st2.top()]>=heights[i]) st2.pop();
                 if(st2.empty()){
                right[i]=n-1;
            }
            else{
                right[i]=st2.top()-1;
            }
            st2.push(i);
            
            }
        }
int ans=INT_MIN;
for(int i = 0; i < n; i++){
    int width=right[i]-left[i]+1;
    ans=max(ans,heights[i]*width);
}
 return ans;

        
    }
};