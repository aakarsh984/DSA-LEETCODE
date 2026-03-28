class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    //    if (digits == vector<int>{9}) {
    // return {1, 0};
// }
        // int x=arr.back();
        int n= digits.size();
        if(count( digits.begin(), digits.end(), 9)==n){
             vector<int> ans(n+1,0);
             ans[0]=1;
             return ans;
        }
      
         for(int i=n-1;i>=0;i--){
            if(digits[i]==9){
                digits[i]=0;
            }
            else{
                digits[i]+=1;
                break;
            }
         }
         return digits;
    }
};