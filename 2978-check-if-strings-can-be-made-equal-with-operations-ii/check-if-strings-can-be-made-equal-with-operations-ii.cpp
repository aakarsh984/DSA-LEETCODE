class Solution {
public:
    bool checkStrings(string s1, string s2) {
         int j=2;
            if(s1==s2) return true;

         map<char, int> o1,o2,e1,e2;

        for(int i=0;i<s1.size();i++){
            if(i%2==0){
                e1[s1[i]]++;
                e2[s2[i]]++;
            }
            else{
                o1[s1[i]]++;
                o2[s2[i]]++;
            }
        }

        if(e1==e2 && o1==o2){
            return true;
        }

        return false;

    }
};