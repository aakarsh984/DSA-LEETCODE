class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // slding window with freq array to checkr epating array
        if (s.length() == 0 || s.length() == 1)
        return s.length();
       int maxl=0;
        int n=s.length();
        int i =0,j=0;
        vector<bool> freq(256,false);
         while(j<n){

            while(freq[s[j]]==true){
                freq[s[i]]=false;
                i++;
            }
            freq[s[j]]=true;
            int curr_len=j-i+1;
            maxl=max(maxl,curr_len);
            j++;
         }
          return maxl;

    }
};