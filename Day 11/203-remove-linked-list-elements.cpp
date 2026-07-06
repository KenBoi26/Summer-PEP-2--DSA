#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        

        if(!head) return head;
        while (head && head->val == val) head = head->next;

        ListNode* temp = head;

        while(temp && temp->next){
            
            if(temp->next->val == val){
                ListNode* toDel = temp->next;
                temp->next = temp->next->next;
                delete toDel;
                continue;
            }
            temp = temp->next;
        }

        if(temp && temp->val == val) temp = NULL;
        

        return head;

        
    }
};

int main(){


    return 0;
}