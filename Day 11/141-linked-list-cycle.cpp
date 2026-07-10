#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int val) : val(val), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        ListNode* fast = head->next;
        ListNode* slow = head;

        while(fast && fast->next){
            if(fast == slow) return true;
            fast = fast->next->next;
            slow = slow->next;
        }

        return false;
    }
};

int main(){


    return 0;
}