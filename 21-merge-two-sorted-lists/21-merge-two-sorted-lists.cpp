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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        ListNode* p1=head1;
        ListNode* p2=head2;
        ListNode* dummyNode=new ListNode(-1);
        ListNode* p3=dummyNode;
        
        while(p1!=NULL && p2!=NULL){
            if(p1->val<p2->val){
                p3->next=p1;
                p1=p1->next;
            }
            else{
                p3->next=p2;
                p2=p2->next;
            }
            p3=p3->next;
        }
        while(p1!=NULL){
                p3->next=p1;
                p1=p1->next;
                p3=p3->next     ;  
        }
        while(p2!=NULL){
                p3->next=p2;
                p2=p2->next;
                p3=p3->next      ; 
        }
        
        return dummyNode->next;
    }
};