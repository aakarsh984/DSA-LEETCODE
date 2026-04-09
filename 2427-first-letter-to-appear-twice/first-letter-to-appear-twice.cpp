class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> st;

        for(char c : s){
            if(st.count(c)){
                return c;   // already seen → repeated
            }
            st.insert(c);
        }

        return 'A'; // fallback (won’t happen as per problem)
    }
};