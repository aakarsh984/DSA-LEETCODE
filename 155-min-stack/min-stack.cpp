class MinStack {
public:
stack<int>st1;
stack<int>st2;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st1.size()==0){
            st1.push(val);
            st2.push(val);
        }
        else{
            st1.push(val);
            if(val<=st2.top())st2.push(val);
        }
    }
    
    void pop() {
        if(st1.size()==0){
            return;
        }
        int ans=st1.top();
        if(ans==st2.top()){
            st2.pop();
        }
        st1.pop();
    }
    
    int top() {
        if(st1.size()==0){
            return -1;
        }
         return st1.top();
        
    }
    
    int getMin() {
        if(st2.size()==0){
            return -1;
        }
        return st2.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */