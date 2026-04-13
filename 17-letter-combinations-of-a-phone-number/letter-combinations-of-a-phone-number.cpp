class Solution {
public:
unordered_map<char, string> mp = {
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
};
void solve(string &digits, int i, string &res, vector<string>& ans){
    if(i==digits.size()){
        ans.push_back(res);
        // res="";
        return;
    }
    for(char ch : mp[digits[i]]) {
        res+=ch;
    solve(digits,i+1,res,ans);
    res.pop_back();
    
}
    

}



    vector<string> letterCombinations(string digits) {
vector<string> ans;
      int i=0;
    string res="";
    solve(digits,i,res,ans);

    return ans;
    }
};