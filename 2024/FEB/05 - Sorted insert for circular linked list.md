## Date: 05-Feb-2024😊

## POTD: Sorted insert for circular linked list - [Problem Link](https://www.geeksforgeeks.org/problems/sorted-insert-for-circular-linked-list/1)

## Easy Accuracy: 25.56% Submissions: 84K+ Points: 2

### Problem Of The Day:

Given a sorted circular linked list of length n, the task is to insert a new node in this circular list so that it remains a sorted circular linked list.

### Today's Task:

The task is to complete the function sortedInsert() which should insert the new node into the given circular linked list and return the head of the linked list.

### Time and Auxiliary Space Complexity:

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

### Constraints:

0 <= n <= 105

### Here's the solution to today's problem:

```cpp 		 
class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       Node* newNode = new Node(data);

        if (!head) {
            newNode->next = newNode;
            return newNode;
        }

        Node* current = head;

        // Find the position to insert the new node
        while (true) {
            if (current->next->data >= data || current->next == head) {
                newNode->next = current->next;
                current->next = newNode;
                break;
            }
            current = current->next;
        }

        // Update head if necessary
        if (data < head->data) {
            head = newNode;
        }

        return head;
    }
};

```

### Contribution and Support:

Follow and aim for a collaborative learning environment, please visit our [discussion section](https://github.com/himanshupassey/gfg-potd/discussions)

If you find this solution beneficial, please show your support by giving a '⭐ star' to the [himanshupassey/gfg-potd](https://github.com/himanshupassey/gfg-potd) repository.
