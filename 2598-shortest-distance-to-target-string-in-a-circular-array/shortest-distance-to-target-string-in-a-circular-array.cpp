class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        if(words[startIndex]==target) return 0;
        
    int f=0;
    int n= words.size();
    int i=(startIndex+1)%n,j=(startIndex-1+n)%n;
    while(i!=startIndex && j!=startIndex){
        f++;
        if(words[i]==target || words[j]==target)

             return f;
   
        
         i=(i+1)%n;

        j=(j-1+n)%n;
    }


return -1;

        
    }
};