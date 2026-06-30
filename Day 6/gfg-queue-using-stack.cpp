#include<bits/stdc++.h>
using namespace std;


class myQueue {

  public:
  
    stack<int> insert_stack;
    stack<int> delete_stack;
    
    myQueue() {
        // Initialize your data members
    }

    void enqueue(int x) {
        // Implement enqueue operation
        insert_stack.push(x);
    }

    void dequeue() {
        // Implement dequeue operation
        int temp = front();
        delete_stack.pop();
    }

    int front() {
        // Implement front operation
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

    int size() {
        // Implement size operation
        
        return delete_stack.size()+insert_stack.size();
    }
};

int main(){


    return 0;
}