class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        long total=mass;
        for(auto x:asteroids){
            if(total<x) return false;
            total+=x;
        }
         return true;
        
    }
};