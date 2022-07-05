/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       int l1=0,l2=0;
       ListNode* temp=headA; 
        while(temp->next!=NULL){
            l1++;
            temp=temp->next;
        }
        temp=headB;
       while(temp->next!=NULL){
            l2++;
            temp=temp->next;
        } 
        ListNode *ptr1,*ptr2;
        int diff=0;
        if(l1>l2){
            diff=l1-l2;
            ptr1=headA;
            ptr2=headB;
            
        }
        if(l2>l1){
            diff=l2-l1;
            ptr1=headB;
            ptr2=headA;
            
        }
        
        while(diff){
            ptr1=ptr1->next;
            if(ptr1==NULL)
                return NULL;
            diff--;
        }
        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1==ptr2)
                return ptr1;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
            
        }
        return NULL;
    }
};