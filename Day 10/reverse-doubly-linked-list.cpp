#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int x) {
        data = x;
        prev = nullptr;
        next = nullptr;
    }
};

Node* reverseDLL(Node* head) {

    // Your code here

    Node* first = nullptr;
    Node* second = head;
    Node* third = head->next;

    while(third){
        second->next = first;
        second->prev = third;

        first = second;
        second = third;
        third = third->next;
    }

    second->next = first;
    second->prev = third;

    return second;


}

Node* buildDLL(int n) {
    if (n == 0) return nullptr;

    int x;
    cin >> x;

    Node* head = new Node(x);
    Node* tail = head;

    for (int i = 1; i < n; i++) {
        cin >> x;
        Node* temp = new Node(x);

        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }

    return head;
}

void printDLL(Node* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << " ";
        head = head->next;
    }
    cout << '\n';
}

int main() {

    Node* n1 = new Node(5);
    Node* n2 = new Node(15);
    Node* n3 = new Node(25);
    Node* n4 = new Node(35);

    n1->next = n2;
    n2->prev = n1;

    n2->next = n3;
    n3->prev = n2;

    n3->next = n4;
    n4->prev = n3;

    Node* head = n1;

    head = reverseDLL(head);

    printDLL(head);

    return 0;

}