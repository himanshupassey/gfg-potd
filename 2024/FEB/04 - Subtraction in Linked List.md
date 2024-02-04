## Date: 04-Feb-2024😊

## POTD: Subtraction in Linked List - [Problem Link](https://www.geeksforgeeks.org/problem-of-the-day)

## Hard Accuracy: 12.94% Submissions: 36K+ Points: 8

### Problem Of The Day:

Given two linked lists that represent two large positive numbers. 
From the two numbers represented by the linked lists, subtract the smaller number from the larger one.

### Today's Task:

The task is to complete the function subLinkedList() that takes heads of two linked lists as input parameters and which should subtract the smaller number from the larger one represented by the given linked lists and return the head of the linked list representing the result.

### Time and Auxiliary Space Complexity:

n and m are the length of the two linked lists respectively.
Expected Time Complexity:  O(n+m)
Expected Auxiliary Space: O(n+m)

### Constraints:

1 <= n <= 10000
0 <= values represented by the linked lists < 10n
0 <= values represented by the linked lists < 10m

### Here's the solution to today's problem:

```cpp 		 
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

```

### Contribution and Support:

Follow and aim for a collaborative learning environment, please visit our [discussion section](https://github.com/himanshupassey/gfg-potd/discussions)

If you find this solution beneficial, please show your support by giving a '⭐ star' to the [himanshupassey/gfg-potd](https://github.com/himanshupassey/gfg-potd) repository.
