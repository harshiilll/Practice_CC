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
    int length(ListNode *head){
        ListNode* temp=head;
        int count=0;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* nextptr;
        ListNode* currptr=head;
        ListNode* prevptr=NULL;
        int count=0;
        
        if(length(currptr)<k-1)
            return currptr;
        
        while(currptr!=NULL && count<k){
            nextptr=currptr->next;
            currptr->next=prevptr;
            prevptr=currptr;
            currptr=nextptr;
            count++;
        }
        if(nextptr!=NULL){
            head->next=reverseKGroup(nextptr,k);
        }
        return prevptr;
        
    }
};