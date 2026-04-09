class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0,l=0;
        if(word.length()==1 && islower(word[0])) return true;
        for(int i=0;i<word.length();i++){
            if(isupper(word[i])){
                c++;
            }
            if(islower(word[i])){
                l++;
            }
        }
        if(word.length()==c||(isupper(word[0])&&c==1) ||l==word.size() ){
            return true;
        }
        return false;
    }
};