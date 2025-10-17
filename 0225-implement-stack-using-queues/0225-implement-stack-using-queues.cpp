
#include<stack>
class MyStack {
    private:
    std::queue<int>main;
    std::queue<int>helper;
public:
    MyStack() {}
    void push(int x) {
        while(!main.empty()){
            helper.push(main.front());
            main.pop();
        }
        main.push(x);
        while(!helper.empty()){
            main.push(helper.front());
            helper.pop();
        }
    }
    int pop() {
        int topelement = main.front();
        main.pop();
        return topelement;
        
    }
    int top() {
        return main.front();    
    }
    bool empty() {
        if(main.size()==0){
            return true;
        }
        else{
            return false;
        }   
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

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */