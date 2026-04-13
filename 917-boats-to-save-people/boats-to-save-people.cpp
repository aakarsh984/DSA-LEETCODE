class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.rbegin(),people.rend());
    int c=0;
        int i=0,j=people.size()-1;
      while(i <= j) {
    if(people[i] + people[j] <= limit) {
        i++;
        j--;
    } else {
        i++;
    }
    c++;
}
      
        return c;
    }
};