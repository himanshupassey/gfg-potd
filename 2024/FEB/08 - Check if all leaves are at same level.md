## Date: 08-Feb-2024😊

## POTD: Check if all leaves are at same level - [Problem Link](https://www.geeksforgeeks.org/problems/leaf-at-same-level/1)


## Easy Accuracy: 39.47% Submissions: 99K+ Points: 2

### Problem Of The Day:

Given a binary tree with n nodes, determine whether all the leaf nodes are at the same level or not. Return true if all leaf nodes are at the same level, and false otherwise.

### Today's Task:

Implement the function check() that checks whether all the leaf nodes in the given binary tree are at the same level or not. The function takes the root node of the tree as an input and should return a boolean value (true/false) based on the condition.

### Time and Auxiliary Space Complexity:

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(height of tree)

### Constraints:

1 ≤ n ≤ 105

### Here's the solution to today's problem:

```cpp
 
class Solution {
public:
    bool check(Node *root)
    {
        queue<pair<Node*, int>> q; 
        q.push({root,0});
        int firstLeaf = -1;
        
        while(!q.empty()){
            auto node = q.front().first;
            int lvl = q.front().second;
            q.pop();
            
            if(!node->left && !node->right)
            {
                if(firstLeaf == -1)
                    firstLeaf = lvl;
                else if(firstLeaf != lvl) 
                    return false;
            }
            ++lvl;
            if(node->left) 
                q.push({node->left, lvl});
            if(node->right) 
                q.push({node->right, lvl});
        }
        return true;
    }
};


```

### Contribution and Support:

Follow and aim for a collaborative learning environment, please visit our [discussion section](https://github.com/himanshupassey/gfg-potd/discussions)

If you find this solution beneficial, please show your support by giving a '⭐ star' to the [himanshupassey/gfg-potd](https://github.com/himanshupassey/gfg-potd) repository.
