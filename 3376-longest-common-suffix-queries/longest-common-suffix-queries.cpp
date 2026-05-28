class Solution {
public:
    struct TrieNode {

        int child[26];
        int index;
        int length;

        TrieNode() {

            memset(child, -1, sizeof(child));

            index = -1;
            length = INT_MAX;
        }
    };

    vector<TrieNode> trie;

    Solution() {
        trie.push_back(TrieNode()); // root
    }

    void insert(string &word, int idx) {

        int node = 0;
        int len = word.size();

        if (len < trie[node].length ||
           (len == trie[node].length && idx < trie[node].index)) {

            trie[node].length = len;
            trie[node].index = idx;
        }

        for (int i = len - 1; i >= 0; i--) {

            int c = word[i] - 'a';

            if (trie[node].child[c] == -1) {

                trie[node].child[c] = trie.size();
                trie.push_back(TrieNode());
            }

            node = trie[node].child[c];

            if (len < trie[node].length ||
               (len == trie[node].length && idx < trie[node].index)) {

                trie[node].length = len;
                trie[node].index = idx;
            }
        }
    }

    int search(string &word) {

        int node = 0;

        for (int i = word.size() - 1; i >= 0; i--) {

            int c = word[i] - 'a';

            if (trie[node].child[c] == -1) {
                break;
            }

            node = trie[node].child[c];
        }

        return trie[node].index;
    }

    vector<int> stringIndices(vector<string>& wordsContainer,vector<string>& wordsQuery) {

        for (int i = 0; i < wordsContainer.size(); i++) {
            insert(wordsContainer[i], i);
        }

        vector<int> ans;

        for (auto &q : wordsQuery) {
            ans.push_back(search(q));
        }

        return ans;
    }
};