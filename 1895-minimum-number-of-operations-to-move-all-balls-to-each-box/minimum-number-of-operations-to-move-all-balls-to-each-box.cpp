class Solution {
public:
    vector<int> minOperations(string boxes) {
        unordered_set<int>idx;
        int n=boxes.length();
        for(int i = 0; i < n; i++){
            if(boxes[i]=='1'){
                idx.insert(i);
            }
        }
    vector<int>ans(n,0);
        for(int i = 0; i < n; i++){
            int t=0;
            for(int x:idx){
                t+=(abs(i-x));
            }
            ans[i]=t;
        }
        return ans;
        
    }
};