/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getLength(ListNode* head){
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) {
       if(head==NULL) return NULL;
       int len=getLength(head);
       int actualrotate=(k%len);
       if(actualrotate==0) return head;
       int newLastNodePos=len-actualrotate-1;
        ListNode* newLastNode=head;
        for(int i=0;i<newLastNodePos;i++){
            newLastNode=newLastNode->next;
        }
        ListNode* newHead=newLastNode->next;
        newLastNode->next=NULL;
        ListNode* it=newHead;
        while(it->next !=NULL){
            it=it->next;
        }
        it->next=head;
        return newHead;
    }
};