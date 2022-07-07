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
    ListNode* rotate(ListNode* head){
        ListNode* temp=head,*prev=head;
        while(temp->next!=NULL ){
            temp=temp->next;
            
        }
        while( prev->next->next!=NULL){
            
            prev=prev->next;
        }
        temp->next=head;
        prev->next=NULL;
        head=temp;
        return head;
    }
    
    
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        int len=0;
        if(head==NULL || head->next==NULL)
            return head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        
        if(k>len ){
            k=(k%len);
        }    
        temp=head;    
        for( int i=0;i<k;i++){
            temp=rotate(temp);
        }
        
        return temp;
    }
};