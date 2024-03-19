class Solution {
public:
    vector<int> levelOrder(Node* root) {
        queue<Node*> q;
        vector<int> out;
        
        if(root == nullptr)
            return out;
        
        q.push(root);
        
        while(!q.empty()) {
            auto front = q.front();
            q.pop();
            out.push_back(front->data);
            
            if(front->left)
                q.push(front->left);
            if(front->right)
                q.push(front->right);
        }
        
        return out;
    }
};
