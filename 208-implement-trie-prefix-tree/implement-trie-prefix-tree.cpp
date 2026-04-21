class Trie {
public:
    struct tn{
        bool isend;
        tn*child[26];
    };
    tn* getnode(){
        tn* newnode= new tn();
        newnode->isend=false;
        for(int i = 0; i < 26; i++){
            newnode->child[i]=NULL;
            
        }
        return newnode;
    }
    tn* root;
    Trie() {
        root=getnode();
    }
    
    void insert(string word) {
        tn* craw= root;
        for(int i=0;i<word.length();i++){
            char c=word[i];
            int idx=c-'a';
            if(craw->child[idx]==NULL){
                craw->child[idx]=getnode();
            }
            craw=craw->child[idx];
        }
        craw->isend=true;
    }
    
    bool search(string word) {
         tn* craw= root;
        for(int i=0;i<word.length();i++){
            char c= word[i];
            int idx=c-'a';
            if(craw->child[idx]==NULL){
                return false;
            }
            craw=craw->child[idx];
        }
        if( craw != NULL && craw->isend==true) return true;
        return false;
    }
    
    bool startsWith(string prefix) {
        tn* craw= root;
        for(int i=0;i<prefix.length();i++){
            char c=prefix[i];
            int idx=c-'a';
            if(craw->child[idx]==NULL){
                return false;
            }
            craw=craw->child[idx];
        }
        return true;
    }
    
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */