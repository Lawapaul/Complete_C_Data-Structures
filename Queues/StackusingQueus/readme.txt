#include <stack>
class MyStack {
public:
    stack <int> s;
    MyStack() {
    }

    bool empty() {
        return s.empty();
    }

    int pop() {
        if(empty()){
            return 0;
        }
        int val= arr[arr.size()-1];
        arr.pop_back();
        return val;
    }
    
    void push(int x) {
        arr.push_back(x);
    }
    
    int top() {
        return arr[arr.size()-1];
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