class Solution {
public:
int n;
    bool solve(vector<int>& arr, int i){   
        if(i>=n||i<0||arr[i]<0) return false;
         if(arr[i]==0) return true;
        arr[i]*=-1;
       int l= solve(arr,i-arr[i]);
       int r= solve(arr,i+arr[i]);
     return l||r;

    }
    bool canReach(vector<int>& arr, int start) {
       n=arr.size();

        return solve(arr,start); 
        
    }
};