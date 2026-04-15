class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        if(words[startIndex]==target) return 0;
        
    int f=0;
    int i=(startIndex+1)%words.size(),j=(startIndex-1+words.size())%words.size();
    while(i!=startIndex || j!=startIndex){
        f++;
        if(words[i]==target || words[j]==target)
             return f;
   
        
        if(i!=startIndex) i=(i+1)%words.size();

        if(j !=startIndex)j=(j-1+words.size())%words.size();
    }


return -1;

        
    }
};