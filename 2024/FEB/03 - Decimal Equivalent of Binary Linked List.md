## Date: 02-Feb-2024😊

## POTD: Decimal Equivalent of Binary Linked List - [Problem Link](https://www.geeksforgeeks.org/problems/implement-atoi/1)

## Easy Accuracy: 21.23% Submissions: 46K+ Points: 2

### Problem Of The Day:

Given a singly linked list of length n. The link list represents a binary number, ie- it contains only 0s and 1s. Find its decimal equivalent.
The significance of the bits decreases with the increasing index in the linked list.

An empty linked list is considered to represent the decimal value 0. 

Since the answer can be very large, the answer modulo 109+7 should be printed.

### Today's Task:

Complete the function decimalValue() which takes a head node of a linked list as an input parameter 
Also return decimal representation of it.

### Time and Auxiliary Space Complexity:

Time Complexity: O(N), where N is the length of the input string. We iterate through the string once.
Auxiliary Space Complexity: O(1), as we use a constant amount of space for variables.

### Constraints:
0 <= n <= 100
Data of each node is either 0 or 1

### Here's the solution to today's problem:
```cpp 		 
class Solution
{
    public:
         
        long long unsigned int decimalValue(Node *head)
        {
        long long unsigned int decimal = 0;
        Node* current = head;
        
        while (current != nullptr) {
            decimal = (decimal * 2 + current->data) % MOD;
            current = current->next;
        }
        
        return decimal;
        }
};

```

### Contribution and Support:

Follow and aim for a collaborative learning environment, please visit our [discussion section](https://github.com/himanshupassey/gfg-potd/discussions)

If you find this solution beneficial, please show your support by giving a '⭐ star' to the [himanshupassey/gfg-potd](https://github.com/himanshupassey/gfg-potd) repository.
