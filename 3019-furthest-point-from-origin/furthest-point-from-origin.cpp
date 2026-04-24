class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int x=0,d=0;
        for(int i = 0; i < moves.size(); i++){
            if(moves[i]=='L')x--;
            else if(moves[i]=='R')x++;
            else d++;
        }
      if(x>0){
        return x+d;
      }
        return -(x-d);

        
    }
};