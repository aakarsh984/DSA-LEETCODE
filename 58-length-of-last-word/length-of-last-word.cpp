class Solution {
public:
    int lengthOfLastWord(string s) {
        int x=s.length();
        int i=0;
        for( i=x-1;i>0;i--){
            if(s[i]==' ')continue;
            else break;
        }
        int count=0;
        for(int k=i;k>=0;k--){
            if(s[k]==' ') break;
            count++;
        }
        return count;
    }
};