class MyQueue {
public:
    MyQueue() {
      
    }
    
      stack<int> st1, st2;
    
    void moveStack(){
     
        while(st1.size()!=0)
        {
            st2.push(st1.top());
            st1.pop();
        }
           
            
    }
    
    void push(int x) {
        st1.push(x);
        
    }
    
    int pop() {
        if(st1.size()==0 && st2.size()==0)
            return -1;
        if(st2.size()==0)
            moveStack();
        int x = st2.top();
        st2.pop();
        return x;
    }
    
    int peek() {
        if(st1.size()==0 && st2.size()==0)
            return -1;
        if(st2.size()==0)
            moveStack();
        
        return st2.top();
        
    }
    
    bool empty() {
        if(st1.size()==0 && st2.size()==0)
            return true;
        else
            return false;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */