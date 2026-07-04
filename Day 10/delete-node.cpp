#include<bits/stdc++.h>
using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    
    if(position == 0){
        llist = llist->next;
        return llist;
    }
    
    SinglyLinkedListNode* temp = llist;
    
    for(int i=0; i<position-1; i++){
        if(!temp) return llist;
        temp = temp->next;
    }
    
    temp->next = temp->next->next;
    
    return llist;
    
}


int main(){


    return 0;
}