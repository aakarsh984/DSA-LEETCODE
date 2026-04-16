class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<int>>mp;
        for(int i = 0; i < strs.size(); i++){
            string temp= strs[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(i);
        }
        for (auto &x : mp) {
    auto &v = x.second;

    vector<string> temp;
    for (int idx : v) {
        temp.push_back(strs[idx]);  // convert index → string
    }

    ans.push_back(temp);
}
 return ans;

    }
};