class Solution {
    public:
        ListNode* oddEvenList(ListNode* head) {
            if(!head || !head->next) return head;
            ListNode* odd=head;
            ListNode* even=odd->next;
            ListNode* evenhead=even;
            while(even && even->next){
                odd->next=even->next;
                even->next=even->next->next;
                odd=odd->next;
                even=even->next;
            }
            odd->next=evenhead;
                return head;
        }
    };