class Solution {
public:
    bool isPalindrome(string s) {
        string n="";
        
        if(s.empty()){
            return true;
        }
      for(char c:s){
         c = tolower(c);
        if(isalnum(c)){
            n.push_back(c);
        }
        else{
            continue;
        }
      }
string temp = n;
reverse(temp.begin(), temp.end());

if(n == temp) {
return true;
}
else{
    return false;
}
    }
};