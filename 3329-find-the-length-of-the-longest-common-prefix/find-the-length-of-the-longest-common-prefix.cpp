class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> arr1Prefixes;

        for (int i = 0; i < arr1.size(); i++) {
            int x = arr1[i];
            while (x > 0 && !arr1Prefixes.count(x)) {
                arr1Prefixes.insert(x);
                x/=10;
            }
        }
        int ans=0;
          for (int i = 0; i < arr2.size(); i++) {
            int y=arr2[i];
            while(y>0){
                if(arr1Prefixes.find(y) != arr1Prefixes.end()){
                    int l=log10(y)+1;
                    ans=max(l,ans);
                }
                y/=10;
            }
          }
    return ans;

    }
};