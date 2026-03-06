class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        Node* curr = head;

        while(curr != NULL && curr->next != NULL){
            if(curr->data == curr->next->data){
                curr->next = curr->next->next;  // remove duplicate
            } 
            else{
                curr = curr->next; // move forward
            }
        }

        return head;
    }
};
