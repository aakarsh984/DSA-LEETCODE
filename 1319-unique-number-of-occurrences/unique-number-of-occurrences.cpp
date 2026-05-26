class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int c=1;
        unordered_set<int>s;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i-1]==arr[i]){
                c++;
            }
            else{
                if(s.count(c)){
                    return false;
                }
                else{
                    s.insert(c);
                   
                }
                 c=1;
            }
            
        }
        if(s.count(c)){
                    return false;
        }
         return true;
        
    }
};