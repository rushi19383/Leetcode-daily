// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         if(headA==NULL || headB==NULL){
//             return NULL;
//         }
//         ListNode* a=headA;
//         ListNode* b=headB;
//         while(a!=b){
//             a=a==NULL ? headB:a->next;
//             b=b==NULL ? headA:b->next;
//         }
//         return a;
//     }
// };


class Solution {
    uintptr_t acc = 0;

    ListNode* reverse(ListNode *head) {
        ListNode *prev = nullptr, *tmp;
        while (head) {
            acc ^= reinterpret_cast<uintptr_t> (head);
            tmp = head->next;
            head->next = prev;
            prev = head;
            head = tmp;
        }
        return prev;
    }
    
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p = headA, *q = headB;
        p = reverse(p);
        q = reverse(q);
        p = reverse(p);
        if (q != headA) q = reverse(q);
        return reinterpret_cast<ListNode*> (acc);
    }
};