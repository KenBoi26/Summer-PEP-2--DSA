#include<bits/stdc++.h>
using namespace std;

class MyLinkedList {
public:
    class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
    };



    Node* head;
    MyLinkedList() {
        head = nullptr;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = newNode;
            return;
        }
        Node* temp = head;

        while(temp->next){
            temp = temp->next;
        }

        temp->next = newNode;
    }

    int cycleLength(Node* head){
        Node* slow = head->next;
        Node* fast = head->next->next;

        while(slow!=fast && fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        if(!fast->next || !fast->next->next) return -1;

        int count = 0;
        fast = fast->next;

        while(fast!=slow){
            count++;
            fast = fast->next;
        }

        return count;


    }
};

int main(){

    MyLinkedList list;
    list.head = new MyLinkedList::Node(1);

    for (int i = 2; i <= 20794; i++) {
        list.addAtTail(i);
    }

    MyLinkedList::Node* current = list.head;
    MyLinkedList::Node* node4553 = nullptr;

    while (current->next != nullptr) {
        if (current->data == 4553)
            node4553 = current;

        current = current->next;
    }

    if (current->data == 4553)
        node4553 = current;

    current->next = node4553;

    cout << list.cycleLength(list.head) << endl;
}