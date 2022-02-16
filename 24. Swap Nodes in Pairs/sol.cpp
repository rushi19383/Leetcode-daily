 ListNode* swapPairs(ListNode* head) {
         if(!head || !head->next) return head;
        ListNode* dummy = new ListNode(0);
        ListNode* prev = dummy;
        dummy->next = head;
        
        while(head && head->next){
            ListNode* first = head;
            ListNode* second = head->next;
            
            prev->next = second;
            first->next=second->next;
            second->next=first;
            
            prev = first;
            head = first->next;
        }
        return dummy->next;
    }
