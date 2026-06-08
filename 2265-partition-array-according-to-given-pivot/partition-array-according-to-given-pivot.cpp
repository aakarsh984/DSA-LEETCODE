class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();

        vector<int> result(n);

        //original nums
        int i = 0;
        int j = n-1;

        //result variables
        int ires = 0;
        int jres = n-1;

        while(i < n && j >= 0) {
            if(nums[i] < pivot) {
                result[ires] = nums[i];
                ires++;
            }

            if(nums[j] > pivot) {
                result[jres] = nums[j];
                jres--;
            }

            i++;
            j--;
        }

        //ires to jres -> fill the pivot
        while(ires <= jres) {
            result[ires] = pivot;
            ires++;
        }

        return result;

    }
};