class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
    stack<int>st1;
    vector<int>left(n,0);
        for(int i = 0; i < n; i++){
            while(!st1.empty() and heights[st1.top()]>=heights[i])st1.pop();

            if(!st1.empty()){
                left[i]=st1.top()+1;
            }
            st1.push(i);
        }
        stack<int>st2;
    vector<int>right(n,n-1);
        for(int i = n-1; i >=0; i--){
            while(!st2.empty() and heights[st2.top()]>=heights[i])st2.pop();

            if(!st2.empty()){
                right[i]=st2.top()-1;
            }
            st2.push(i);
        }
        int ans=0;
        for(int i = 0; i < n; i++){
            int width=right[i]-left[i]+1;
            ans=max(ans,heights[i]*width);
        }
        return ans;

    }
};