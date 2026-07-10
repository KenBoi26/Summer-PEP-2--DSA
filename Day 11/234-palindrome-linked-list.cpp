#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int val) : val(val), next(nullptr) {}
};

bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        ListNode* prev = nullptr;
        ListNode* nextNode = slow->next;

        while(fast!=nullptr && fast->next!=nullptr){
            slow = slow->next;         
            fast = fast->next->next;
        }

        while(slow->next != nullptr){
            nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }
        
        ListNode* temp = slow;
        nextNode = slow->next;
        slow->next = prev;
        prev = slow;
        slow = nextNode;


        while(temp != nullptr){
            if(head->val != temp->val){
                return false;
            }
            head = head->next;
            temp = temp->next;
        }

        return true;


    }

int main(){


    return 0;
}