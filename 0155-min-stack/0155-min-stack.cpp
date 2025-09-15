class MinStack {
public:
vector<vector<int>>st;
    MinStack() {
        
    }
    
    void push(int val) {
        int mini=getMin();
        if(st.empty()||mini>val)
        mini=val;

        st.push_back({val,mini});
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        if(st.empty())
        return -1;
        else
        return st.back()[0];
    }
    
    int getMin() {
    if (st.empty())
    return -1;
    return st.back()[1];
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