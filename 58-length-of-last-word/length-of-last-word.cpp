class Solution {
public:
    int lengthOfLastWord(string s) {
        string x;
        string last;
        stringstream ss(s);
      while(ss>>x){
        last=x;
      }
      return last.length();

        
    }
};