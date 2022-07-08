/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node*curr=head,*temp;
        
        while(curr){
            temp=curr->next;
            
            curr->next= new Node(curr->val);
            curr->next->next=temp;
            curr=temp;
        }
        
        curr=head;
        while(curr){
            if(curr->random){
                curr->next->random=curr->random->next;
            }
            curr=curr->next->next;
        }
        
        curr=head;
        Node* pseudoHead=new Node(0);
        Node* copy=pseudoHead;
        Node* front;
        
        while(curr){
            front=curr->next->next;
            copy->next=curr->next;
            curr->next=front;
            copy=copy->next;
            curr=curr->next;
        }
        
        return pseudoHead->next;
        } 
    };
