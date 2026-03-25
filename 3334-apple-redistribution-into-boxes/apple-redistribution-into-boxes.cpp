class Solution {
public:
static bool cmp(int a,int b){
    return a>b;

}
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int ap= accumulate(apple.begin(), apple.end(), 0);
        // int c= accumulate(capacity.begin(), capacity.end(), 0);
        sort(capacity.begin(),capacity.end(),cmp);
        int c=0;
    int i=0;
    
        while(ap>0){
           ap -= capacity[i];
            c++;
            i++;
        }
        return c;
    }
};