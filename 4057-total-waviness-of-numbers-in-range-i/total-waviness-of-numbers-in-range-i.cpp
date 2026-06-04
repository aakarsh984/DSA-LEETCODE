class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans=0;
        for(int i = num1; i <= num2; i++){
                string s=to_string(i);
                if(s.length()<3)continue;
                // int j=1;
                for(int j = 1; j < s.length()-1; j++){
                    if(s[j]<s[j+1]&& s[j]<s[j-1])ans++;//valley
                    if(s[j]>s[j+1]&& s[j]>s[j-1])ans++;//peak
                }
        }
        return ans;
        
    }
};