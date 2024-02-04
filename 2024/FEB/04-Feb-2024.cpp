class Solution {
public:
    Node* subLinkedList(Node* head1, Node* head2) {
        // Your implementation of subLinkedList goes here
        head1 = reverseList(head1);
        head2 = reverseList(head2);
        
        Node* result = nullptr;
        Node* curr = nullptr;
        int borrow = 0;
        
        // Subtract the digits until both lists are exhausted
        while (head1 || head2) {
            int num1 = head1 ? head1->data : 0;
            int num2 = head2 ? head2->data : 0;
            
            int diff = num1 - num2 - borrow;
            if (diff < 0) {
                diff += 10;
                borrow = 1;
            } else {
                borrow = 0;
            }
            
            // Update the result linked list
            if (!result && diff != 0) {
                result = new Node(diff);
                curr = result;
            } else if (result || diff != 0) {
                curr->next = new Node(diff);
                curr = curr->next;
            }
            
            // Move to the next digits
            if (head1) head1 = head1->next;
            if (head2) head2 = head2->next;
        }
        
        // Reverse the result linked list before returning
        return reverseList(result);
    }
    
private:
    Node* reverseList(Node* head) {
        Node* prev = nullptr;
        Node* curr = head;
        while (curr) {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
};
