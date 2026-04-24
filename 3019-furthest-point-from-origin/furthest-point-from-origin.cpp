class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0,r=0,d=0;
        for(int i = 0; i < moves.size(); i++){
            if(moves[i]=='L')l++;
            else if(moves[i]=='R')r++;
            else d++;
        }
        if(l>r){
            return l+d-r;
        }
        else{
            return r+d-l;
        }

        
    }
};