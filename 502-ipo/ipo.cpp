class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n= profits.size();
        vector<pair<int,int>> v;

    for(int i = 0; i < n; i++){
         v.push_back({profits[i], capital[i]});
    }
    sort(v.begin(), v.end(), [](pair<int,int> &p1, pair<int,int> &p2){
    if(p1.second == p2.second)
        return p1.first < p2.first;
    return p1.second < p2.second;
});
// for(auto &x:v){
//     cout<<x.first<<" "<<x.second<<endl;
// }
priority_queue<long long> pq;
int i=0;


while(k--){
    // if(c==n) break;
     while(i < n && v[i].second <= w){
                pq.push(v[i].first);
                i++;
            }
    
    if(pq.empty()) break;
    int m=pq.top();
     w+=m;
    pq.pop();
}
        return w;
    }
};