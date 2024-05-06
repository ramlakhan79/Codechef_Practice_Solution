/* Linked List Node
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // your code here
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        Node *curr=head;
        while(curr!=nullptr && curr->next!=nullptr){
            if(curr->data==(curr->next)->data){
                curr->next=curr->next->next;
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};
