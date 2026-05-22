class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i=0,j=0;
        for(int k = 0; k < commands.size(); k++){
            if(commands[k]=="UP")--i;
            else if(commands[k]=="DOWN") ++i;
            else if(commands[k]=="RIGHT")j++;
            else j--;
        }
         return (i*n)+j;
        
    }
};