class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {

        unordered_set<int> s;

        // store all nodes which have incoming edge
        for(int i = 0; i < edges.size(); i++){
            s.insert(edges[i][1]);
        }

        vector<int> res;

        // loop from 0 to n-1 (NOT s.size())
        for(int i = 0; i < n; i++){
            if(s.find(i) == s.end()){
                res.push_back(i);
            }
        }

        if(res.size() > 1){
            return -1;
        }

        return res.size() == 1 ? res[0] : -1;
    }
};