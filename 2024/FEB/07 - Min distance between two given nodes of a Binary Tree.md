## Date: 07-Feb-2024😊

## POTD: Min distance between two given nodes of a Binary Tree - [Problem Link]([https://www.geeksforgeeks.org/problems/min-distance-between-two-given-nodes-of-a-binary-tree/1]

## Medium Accuracy: 39.13% Submissions: 94K+ Points: 4

### Problem Of The Day:

Given a binary tree with n nodes and two node values, a and b, your task is to find the minimum distance between them. The given two nodes are guaranteed to be in the binary tree and all node values are unique.

### Today's Task:

Your task is to complete the function findDist() which takes the root node of the tree and the two node values a and b as input parameters and returns the minimum distance between the nodes represented by the two given node values.

### Time and Auxiliary Space Complexity:

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(Height of the Tree).

### Constraints:

2 <= n <= 105
1 <= Data of a node <= 109

### Here's the solution to today's problem:

```cpp
 
class Solution {
public:
    int ans = 0;

    int solve(Node* root, int a, int b) {
        if (root == NULL || ans > 0) 
            return 0;

        int l = solve(root->left, a, b);
        int r = solve(root->right, a, b);

        if ((root->data == a || root->data == b)) {
            if (l != 0) 
                ans = l;
            else if (r != 0) 
                ans = r;
            else 
                return 1;
        }

        if (l != 0 && r != 0) 
            ans = l + r;
        else if (l != 0) 
            return l + 1;
        else if (r != 0) 
            return r + 1;
        
        return 0;
    }

    int findDist(Node* root, int a, int b) {
        if (a == b) 
            return 0;
        
        solve(root, a, b);
        return ans;
    }
};

```

### Contribution and Support:

Follow and aim for a collaborative learning environment, please visit our [discussion section](https://github.com/himanshupassey/gfg-potd/discussions)

If you find this solution beneficial, please show your support by giving a '⭐ star' to the [himanshupassey/gfg-potd](https://github.com/himanshupassey/gfg-potd) repository.
