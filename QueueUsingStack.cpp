using namespace std;

class MyQueue {
public:

    stack<int> st1;
    stack<int> st2;

    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(st1.empty() && st2.empty())
            return 0;
        if(st2.empty()){
            int top;
            while(!st1.empty()){
                top = st1.top();
                st2.push(top);
                st1.pop();
            }
        }
        int q_top = st2.top();
        st2.pop();
        return q_top;
        
    }
    
    int peek() {
        if(st1.empty() && st2.empty())
            return 0;
        if(st2.empty()){
            int top;
            while(!st1.empty()){
                top = st1.top();
                st2.push(top);
                st1.pop();
            }
        }
        return st2.top();
    }
    
    bool empty() {
        if(st1.empty() && st2.empty())
            return true;
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