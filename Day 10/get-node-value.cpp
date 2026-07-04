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


int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    SinglyLinkedListNode* temp = llist;
    int length = 0;
    
    while(temp){
        length++;
        temp = temp->next;
    }
    
    int position_from_head = length - positionFromTail;
    
    for(int i=0; i<position_from_head-1; i++){
        llist = llist->next;
    }
    
    return llist->data;
}

int main(){


    return 0;
}