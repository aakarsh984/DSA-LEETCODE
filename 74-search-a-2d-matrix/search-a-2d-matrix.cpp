class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int i=0,j=0;
       while(i<m){
            if(matrix[i][0]> target || matrix[i][n-1]<target){
                i++;
            }
        else{
            int l=0,r=n-1;
           
            while(l<=r){
             int mid=l+(r-l)/2;
            if(matrix[i][mid]==target) return true;
            if(matrix[i][mid]>target){
                r= mid-1;
            }
            else{
                l=mid+1;
            }

            }
            i++;
        }  
       }

       return false;
        
    }
};