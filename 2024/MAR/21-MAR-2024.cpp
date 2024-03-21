class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector<int>ans;
    vector <int> zigZagTraversal(Node* root)
    {
        if (root==nullptr)
            return ans;
        queue<Node*> q;
        q.push(root);
        bool left=true;
        while (!q.empty())
        {
            int size=q.size();
            vector<int>vec(size);
            for (int i=0;i<size;i++)
            {
                Node* temp=q.front();
                q.pop();
                int ind=left ? i : (size-1-i);
                vec[ind]=temp->data;
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
            left=!left;
            ans.insert(ans.end(), vec.begin(), vec.end());
        }
        return ans;
    }
};
