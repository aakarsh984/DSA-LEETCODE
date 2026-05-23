class Solution {
public:
    bool check(vector<int>& nums) {
        // vector<int> nums = {3, 4, 5, 1, 2};
        int n = nums.size();
        vector<int> check(n);
        int x=0;
        while(x<n){
            for(int i = 0; i < n; i++){
                check[i]=nums[(i+x)%n];
            }
            if(is_sorted(check.begin(),check.end())) return true;;
             x++;
        }
         return false;
    }
};