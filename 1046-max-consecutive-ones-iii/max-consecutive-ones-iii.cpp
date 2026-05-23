class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0;
        int count = 0;
        int ans=INT_MIN;
        int n=nums.size();
        int ch=k;
        bool f= false;
        if(k==0) f=true;
        while (j < n) {
            if (nums[j] == 0) {
                if (k != 0) {
                    // count++;
                    k--;
                    // j++;
                } 
                else { // k=0
                if(!f){
                    while(k==0 && k<=ch){
                        if(nums[i]==0){
                            k++;
                        }
                        i++;  
                    }
                    k--;
                }
                else{
                    if(ch==0)i = j + 1;;
                    // continu
                }
                
            }
        } // bada wla if

            // count++;
            ans=max(ans,j-i+1);
            j++;
            
        }
        return ans;
    }
};