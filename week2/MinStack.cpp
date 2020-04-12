
class Node{
public:
    int value;
    int minValue;
};
class MinStack {
public:
    /** initialize your data structure here. */
    stack<Node> st;
    MinStack() {
    }
    
    void push(int x) {
        Node n;
        n.value = x;
        n.minValue = (st.empty())?x:min(st.top().minValue,x);
        st.push(n);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().value;
    }
    
    int getMin() {
        return st.top().minValue;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
