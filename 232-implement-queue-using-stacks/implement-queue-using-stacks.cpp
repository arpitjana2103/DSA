class MyQueue {
public:
    stack<int> input;
    stack<int> output;

    MyQueue() {
        this -> input = stack<int>();
        this -> output = stack<int>();
    }
    
    void push(int x) {
       this -> input.push(x);
    }
    
    int pop() {
        int res = this -> peek();
        this -> output.pop();
        return res;
    }
    
    int peek() {
        if(this -> output.empty()){
            while( !this -> input.empty()){
                this -> output.push(this -> input.top());
                this -> input.pop();
            }
        }
        return this -> output.top();
    }
    
    bool empty() {
        return this -> input.empty() and this -> output.empty();
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