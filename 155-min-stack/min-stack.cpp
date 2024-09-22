class MinStack {
public:
    vector<int> st;
    vector<int> minSt;

    MinStack() {
        this -> st = {};
        this -> minSt = {};
    }
    
    void push(int val) {
        if(minSt.size() > 0){
            if(minSt.back() >= val){
                minSt.push_back(val);
            }
        }else{
            minSt.push_back(val);
        }

        this -> st.push_back(val);
    }
    
    void pop() {
        if(this -> st.back() == this -> minSt.back())
            minSt.pop_back(); 
        this -> st.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return this -> minSt.back();
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