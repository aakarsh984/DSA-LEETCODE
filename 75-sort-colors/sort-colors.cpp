class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> freq(3,0);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        for(int i=0;i<nums.size();i++){
            if(freq[0] !=0){
                nums[i]=0;
                freq[0]--;
            }
            else if(freq[1] !=0){
                nums[i]=1;
                freq[1]--;
            }
            else nums[i]=2;


        }
        
       
    }
};