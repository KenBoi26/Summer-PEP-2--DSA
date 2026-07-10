#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int val) : val(val), next(nullptr) {}
};

ListNode* deleteDuplicates(ListNode* head) {
    ListNode* temp = head;

    while(temp && temp->next){
        if(temp->val == temp->next->val){
            temp->next = temp->next->next;
            continue;
        }

        temp = temp->next;
    }

    return head;
}

int main(){


    return 0;
}