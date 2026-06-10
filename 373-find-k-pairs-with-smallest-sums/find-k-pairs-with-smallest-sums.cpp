class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2,int k) {
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        vector<vector<int>> ans;
        set<pair<int, int>> visited;
        visited.insert({0, 0});
        int n=nums1.size();
        int m=nums2.size();
        int sum = nums1[0] + nums2[0];

        pq.push({sum, 0, 0});
        // we can chose i+1,j or i,j+1
        while(!pq.empty() && ans.size() < k) {
            vector<int> temp = pq.top();
            pq.pop();
            int i = temp[1];
            int j = temp[2];
            ans.push_back({nums1[i], nums2[j]});
           
            if(i+1<n and !visited.count({i+1,j})){
                pq.push({nums1[i + 1] + nums2[j], i + 1, j});
                visited.insert({i+1,j});
            }
            if(j+1<m and !visited.count({i,j+1})){
            pq.push({nums1[i] + nums2[j + 1], i, j + 1});
            visited.insert({i,j+1});
            }
        }
        return ans;
    }
};