class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n=words.size();
        string res="";
           for(string w:words){
                int x=0;
                for(int i = 0; i < w.size(); i++){
                        x+=weights[w[i]-'a'];
                }
                x%=26;
                char c=(25-x)+'a';
                res+=c;
           }

        return res;
    }
};