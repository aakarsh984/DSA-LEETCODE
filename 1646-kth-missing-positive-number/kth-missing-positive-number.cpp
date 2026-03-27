class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i = 0;
        int num = 1;
        int x = arr.back();
        while (k > 0) {

            if (i < arr.size() && arr[i] == num) {
                i++;
            }

            else {
                k--;
                if (k == 0) {
                    break;
                }
            }
            num++;
        }
        return num;
    }
};