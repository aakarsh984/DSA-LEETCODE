class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int ans=0;
        while(i<j){
            int h=min(height[i],height[j]);
            int l=j-i;
            // int area=h*l;
            ans=max(ans,h*l);
        if(height[i]<height[j]){
            i++;
        }
        else{
            j--;
        }

        }
         return ans;
        
    }
};