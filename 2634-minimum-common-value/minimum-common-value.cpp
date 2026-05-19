class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int m= nums1.size();
        int n= nums2.size();
        unordered_set<int>s;

        if(m>n){
            for(int i = 0; i < n; i++){
            s.insert(nums2[i]);    
            }
            for(int i = 0; i < m; i++){
              if(s.count(nums1[i])) return nums1[i];
            }
        }
        else{
            for(int i = 0; i < m; i++){
                 s.insert(nums1[i]);
            }
            for(int i = 0; i < n; i++){
              if(s.count(nums2[i])) return nums2[i];
            }
        }
         return -1;
        
    }
};