## Date: 07-Feb-2024😊

## POTD: Min distance between two given nodes of a Binary Tree - [Problem Link]([https://www.geeksforgeeks.org/problems/sorted-insert-for-circular-linked-list/1]

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
