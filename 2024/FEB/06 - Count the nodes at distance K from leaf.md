## Date: 06-Feb-2024😊

## POTD: Count the nodes at distance K from leaf - [Problem Link]([https://www.geeksforgeeks.org/problems/sorted-insert-for-circular-linked-list/1]

## Medium Accuracy: 34.27% Submissions: 49K+ Points: 4

### Problem Of The Day:

Given a binary tree with n nodes and a non-negative integer k, the task is to count the number of special nodes.
A node is considered special if there exists at least one leaf in its subtree such that the distance between the node and leaf is exactly k.

### Today's Task:

Complete the function printKDistantfromLeaf() that takes root node and k as inputs and returns the number of nodes that are at distance k from a leaf node. 

### Time and Auxiliary Space Complexity:

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(Height of the Tree).

### Constraints:

1 <= n <= 105

### Here's the solution to today's problem:

```cpp
 
class Solution {
public:
    int cnt;
    
    void dfs(Node* node, int& k, int lvl, unordered_map<int, bool>& mp) {
        if (!node)
            return;
        
        mp[lvl] = false;
        
        if (!node->left && !node->right) {
            if (lvl - k >= 0 && !mp[lvl - k]) {
                mp[lvl - k] = true;
                cnt++;
            }
        }
        
        ++lvl;
        dfs(node->left, k, lvl, mp);
        dfs(node->right, k, lvl, mp);
    }
    
    int printKDistantfromLeaf(Node* root, int k) {
        cnt = 0;
        unordered_map<int, bool> mp;
        dfs(root, k, 0, mp);
        return cnt;
    }
};

```

### Contribution and Support:

Follow and aim for a collaborative learning environment, please visit our [discussion section](https://github.com/himanshupassey/gfg-potd/discussions)

If you find this solution beneficial, please show your support by giving a '⭐ star' to the [himanshupassey/gfg-potd](https://github.com/himanshupassey/gfg-potd) repository.

