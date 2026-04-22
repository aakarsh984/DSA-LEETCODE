class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> res;
        for(int i = 0; i < queries.size(); i++){
            for(int j=0;j<dictionary.size();j++){
                int diff=0;
                for(int k=0;k<dictionary[j].size();k++){
                    if(queries[i][k] != dictionary[j][k]) diff++;
                    if (diff>2)break;
                }
                  if(diff<=2){ res.push_back(queries[i]);
                  break;
            }
            }
        }
        return res;


        
    }
};