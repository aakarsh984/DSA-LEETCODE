class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int x=0,d=0;
        int c=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='R')x++;
            if(moves[i]=='L')x--;
            if(moves[i]=='_')c++;
        }
        if(x>=0)return x+c;
        return abs(x-c);
    }
};