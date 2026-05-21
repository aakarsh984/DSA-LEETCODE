class Solution {
public:
    struct tn {
        bool isend;
        tn* child[10];
    };
    tn* getnode() {
        tn* newnode = new tn();
        newnode->isend = false;
        for (int i = 0; i < 10; i++) {
            newnode->child[i] = NULL;
        }
        return newnode;
    }
    tn* root;
    Solution() { root = getnode(); }
    void insert(string numst1){
        tn *crawler=root;

        for(char c : numst1){
            int idx=c-'0';
            if(crawler->child[idx]==NULL){
                crawler->child[idx]=getnode();
            }
            crawler=crawler->child[idx];
        }

        crawler->isend=true;

    }
    int lengthSearch(string numst2){
        int count =0;
        tn* crawler= root;
        for(char c: numst2){
            int idx=c-'0';
             if(crawler->child[idx]==NULL){
                return count;
             }
             crawler=crawler->child[idx];
             count++;
        }
        return count;
    }


    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {

        for(int i = 0; i < arr1.size(); i++){
            string s= to_string(arr1[i]);
            insert(s);
        }
        int ans=0;
         for(int i = 0; i < arr2.size(); i++){
            string s= to_string(arr2[i]);
           int l=lengthSearch(s);
           ans=max(ans,l);
        }
         return ans;



    }
};