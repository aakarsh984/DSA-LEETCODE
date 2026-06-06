class Solution {
public:
    string defangIPaddr(string a) {
        for(int i = 0; i < a.length(); i++){
            if(a[i]=='.'){
                    a.insert(a.begin()+i,'[');
                    i+=2;
                    a.insert(a.begin()+i,']');
            }
        }
        return a;
        
    }
};