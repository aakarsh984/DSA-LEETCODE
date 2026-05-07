class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n= candyType.size();
        int total =n/2;

        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(candyType[i]);
        }

        if(st.size()<=total) return st.size();
        return total;
    }
};