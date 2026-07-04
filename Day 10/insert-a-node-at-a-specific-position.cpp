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


SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* temp = llist;

    if(position == 0){
        newNode->next = llist;
        llist = newNode;
        return llist;
    }
    
    for(int i=0; i<position-1; i++){
        if(!temp) return llist;
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    
    return llist;
}

int main(){


    return 0;
}