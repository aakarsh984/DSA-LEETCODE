class Solution {
public:
    bool judgeCircle(string moves) {
        //r=1 u=1 l=-1 d=-1
        int r=count(moves.begin(),moves.end(),'R');
        int l=count(moves.begin(),moves.end(),'L');
        int u=count(moves.begin(),moves.end(),'U');
        int d=count(moves.begin(),moves.end(),'D');

        return (r==l)&&(u==d);
    }
};