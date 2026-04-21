class Solution {
public:
    struct trieNode {
        trieNode* left;//0
        trieNode* right;//1
    };

    void insert(trieNode* head,int &num){
        trieNode* craw=head;
        for(int i=31;i>=0;i--){
            int bit=(num>>i)&1;
            if(bit==0){
                if(craw->left==NULL){
                    craw->left=new trieNode();
                }
                craw=craw->left;
            }
            else{// bit is 1
             if(craw->right==NULL){
                    craw->right=new trieNode();
                }
                craw=craw->right;
            }
        }
    }
    int maxXor(trieNode* head,int num){
         int maxx=0;
         trieNode* crawl=head;
         for(int i = 31 ; i >=0 ; i--){
             int ith=(num>>i)&1;

             if(ith==1){
                if(crawl->left!=NULL){
                    maxx+=pow(2,i);
                    crawl=crawl->left;
                }
                else{
                    crawl=crawl->right;

                }
             }
             else{//ith ==0
                    if(crawl->right!=NULL){
                        maxx+=pow(2,i);
                        crawl=crawl->right;
                    }
                    else{
                        crawl=crawl->left;
                    }

             }
         }
    return maxx;
    }
    int findMaximumXOR(vector<int>& nums) {
        trieNode* root = new trieNode();
        for(int &x: nums) {
            insert(root, x);
        }
        int res=0;
        for(int &x : nums) {
            res = max(res, maxXor(root, x));
        }
        return res;
    }
};