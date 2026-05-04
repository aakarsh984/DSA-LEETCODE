class Solution {
public:
    string sortVowels(string s) {
        unordered_map<char, int> freq;
        vector<char> order;  // tracks first-seen order of vowels

        for (char c : s) {
            if (isVowel(c)) {
                if (freq.find(c) == freq.end())
                    order.push_back(c);  // first time seeing this vowel
                freq[c]++;
            }
        }

        // stable sort preserves first-seen order on ties
        stable_sort(order.begin(), order.end(), [&](char a, char b) {
            return freq[a] > freq[b];
        });

        string sortedVowels;
        for (char c : order)
            sortedVowels += string(freq[c], c);

        int idx = 0;
        for (char &c : s)
            if (isVowel(c)) c = sortedVowels[idx++];

        return s;
    }

private:
    bool isVowel(char c) {
        static const string v = "aeiouAEIOU";
        return v.find(c) != string::npos;
    }
};