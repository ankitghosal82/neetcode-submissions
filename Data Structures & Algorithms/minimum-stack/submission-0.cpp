class MinStack {
public:
    stack<int>st;
    stack<int>s;
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        if(s.empty())
        {
            s.push(val);
        }
        else{
            s.push(min(val,s.top()));
        }
    }
    
    void pop() {
        st.pop();
        s.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return s.top();
    }
};
