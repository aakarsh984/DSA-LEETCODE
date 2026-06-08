class Solution {
public:
    bool ispossible(int n, vector<int>&q,int mid){
        // int i=0;int j=0;
        // vector<int>prod(n,0);
    //   while(i<q.size()){

    //     if(q[i]>=mid){
    //         j++;
    //         q[i]-=mid;
    //     }
    //     else{
    //         // prod[j++]=q[i];
    //         j++;
    //         q[i]=0;
    //     }
    //     if(j==n) break;
    //     if(q[i]==0){
    //         i++;
    //     }
    int a=0;
    for(int i = 0; i < q.size(); i++){
        if(q[i]%mid !=0){
            a+=(q[i]/mid)+1;
        }
        else{
            a+=(q[i]/mid);
        }
        if(a>n) return false;
    }


      return true;
        // for(int i = 0; i < q.size(); i++){
        //     if(q[i]!=0)return false;
        // }
        //  return true;

    }
    int minimizedMaximum(int n, vector<int>& q) {
        // int m=q.size();
        int low = 1;
        int high = *max_element(q.begin(), q.end());
        int ans = INT_MIN;
         while (low<=high){
            int mid=low+(high-low)/2;
            if(ispossible(n,q,mid)){
                high=mid-1;
               ans=mid;
            }
            else{
                low= mid+1;
            }

         }
         return ans;
    }
};