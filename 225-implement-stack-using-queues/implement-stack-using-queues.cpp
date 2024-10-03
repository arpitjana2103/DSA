class MyStack {
public:
    queue<int> q1;
    queue<int> q2;

    MyStack() {
       q1 = queue<int>();
       q2 = queue<int>(); 
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int val = top();
        if(!q1.empty()){
            while(q1.size() > 1){
                q2.push(q1.front());
                q1.pop();
            }
            q1.pop();
        }else{
            while(q2.size() > 1){
                q1.push(q2.front());
                q2.pop();
            }
            q2.pop();
        }
        return val;
    }
    
    int top() {
        if(!q1.empty()) return q1.back();
        else return q2.back();
    }
    
    bool empty() {
        return q1.empty() and q2.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */