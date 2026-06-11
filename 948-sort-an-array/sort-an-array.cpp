class Solution {
public:
  void merge(vector<int>& nums,int l,int mid,int r){
        vector<int>temp;
        int i=l,j=mid+1;
        while(i<=mid && j<=r ){
            if(nums[i]<nums[j])temp.push_back(nums[i++]);
            else temp.push_back(nums[j++]);
        }
        while(i<=mid){
            temp.push_back(nums[i++]);
        }
         while(j<=r){
            temp.push_back(nums[j++]);
        }
        for(int k = l; k <= r; k++){
            nums[k]=temp[k-l];
        }

  }
    void mergeSort(vector<int>& nums,int l,int r){
        if(l>=r)return;
        int mid =l+(r-l)/2;
        mergeSort(nums,l,mid);
        mergeSort(nums,mid+1,r);

        merge(nums,l,mid,r);
    }
    vector<int> sortArray(vector<int>& nums) {
         int n=nums.size();

        mergeSort(nums,0,n-1);

        return nums;
        
    }
};