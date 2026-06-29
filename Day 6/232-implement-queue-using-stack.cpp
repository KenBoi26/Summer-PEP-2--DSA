#include<bits/stdc++.h>
using namespace std;

class MyQueue {
public:

    stack<int> insert_stack;
    stack<int> delete_stack;
    
    MyQueue() {
    
    }
    
    void push(int x) {
        insert_stack.push(x);
    }
    
    int pop() {
        int temp = peek();
        int print = delete_stack.top();
        delete_stack.pop();
        return print;
        
    }
    
    int peek() {
        if(delete_stack.size() == 0){
            while(insert_stack.size() > 0){
                int temp = insert_stack.top();
                insert_stack.pop();
                delete_stack.push(temp);
            }
        }
        if(delete_stack.size() == 0 && insert_stack.size() == 0) return -1;
        return delete_stack.top();
    }
    
    bool empty() {
        int temp = peek();
        return delete_stack.size() == 0;
    }
};

int main(){


    return 0;
}