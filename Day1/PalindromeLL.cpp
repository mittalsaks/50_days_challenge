class Solution {
    public:
        bool isPalindrome(ListNode* head) {
           if(!head || !head->next){
            return true;
           }
           //First step Find middle Node
           ListNode* slow=head;
           ListNode* fast=head;
           while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
           }
           //Step-2 Reverse Second half of ll
           ListNode* prev=NULL;
           ListNode* curr=slow;
           while(curr!=NULL){
            ListNode* forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
           }
           //Step-3 Compare the first half with second reversed half
           ListNode* tempHead1=head;
           ListNode* tempHead2=prev;
           while(tempHead2!=NULL){
            if(tempHead1->val != tempHead2->val){
                return false;
            }
            else{
                tempHead1=tempHead1->next;//1step aage badhao
                tempHead2=tempHead2->next;
            }
           }
           return true;
        }
    };