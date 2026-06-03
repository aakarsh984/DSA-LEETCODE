class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1;//start fromlement end
        int j = n - 1;
        int k = m + n - 1;
        //start from reverse and if greater put in the kth postion which the actual last of array
        while(i >= 0 && j >= 0){
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                k--;
                i--;
            }
            else{
                nums1[k--] = nums2[j--];
            }
        }
    //file the reamianig elemnt
        while(j >= 0){
            nums1[k--] = nums2[j--];
        }
    }
};