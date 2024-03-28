class Solution {
  public:
    vector<int> diagonalSum(Node* root)
    {
        vector<int> ans;
        function<void(Node *, int)> dfs = [&](Node * node, int cur)
        {
            if(!node)
                return;
            if(cur==ans.size())
                ans.push_back(node -> data);
            else ans[cur] += node -> data;
            dfs(node->left, cur+1);
            dfs(node->right, cur);
        };
        dfs(root, 0);
        return ans;
    }
};
