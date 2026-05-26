class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int,int> freq;

        // count frequency
        for(int x : arr) {
            freq[x]++;
        }

        unordered_set<int> s;

        // check uniqueness of frequencies
        for(auto it : freq) {

            if(s.count(it.second))
                return false;

            s.insert(it.second);
        }

        return true;
    }
};