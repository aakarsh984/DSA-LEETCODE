class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
         int m= nums1.size();
        int n= nums2.size();
        int i=0;
        int j=0;
        while(i<m &&j<n){
            if(nums1[i]==nums2[j]) return nums1[i];
            else if(nums1[i]>nums2[j]) j++;
            else{//nums2[j]>nums1[i]
                i++;
            }

        }
        return -1;
        
    }
};