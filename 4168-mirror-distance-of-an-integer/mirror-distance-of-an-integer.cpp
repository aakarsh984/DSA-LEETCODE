class Solution {
public:
    int mirrorDistance(int n) {
            string rev= to_string(n);
            reverse(rev.begin(),rev.end());
            int x= stoi(rev);
            return abs(n-x);
        
    }
};