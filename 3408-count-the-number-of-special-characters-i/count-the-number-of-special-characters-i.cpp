class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>cap(26,0);
        vector<int>lower(26,0);
    int count=0;
        for(int i = 0; i < word.length(); i++){
            if(islower(word[i])){
                lower[word[i]-'a']+=1;
            }
            else{
                cap[word[i]-'A']+=1;
            }
        }
        for(int i = 0; i < 26; i++){
              if(cap[i] !=0 &&  lower[i]!=0){
                count ++;
            }
        }
         return count;
        
    }
};