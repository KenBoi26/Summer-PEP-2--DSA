#include<bits/stdc++.h>
using namespace std;

class myStack {
    queue<int> q;

  public:

    void push(int x) {
        // Inserts an element x at the top of the stack
        q.push(x);
    }

    void pop() {
        // Removes an element from the top of the stack
        int n = q.size()-1;
        if(n<0) return;
        while(n-- > 0){
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        q.pop();
    }

    int top() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        
        if(q.size() == 0) return -1;
        
        int n = q.size()-1;
        while(n-- > 0){
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        int print = q.front();
        int temp = q.front();
        q.pop();
        q.push(temp);
        return print;
    }

    int size() {
        // Returns the current size of the stack
        return q.size();
    }
};


int main(){


    return 0;
}