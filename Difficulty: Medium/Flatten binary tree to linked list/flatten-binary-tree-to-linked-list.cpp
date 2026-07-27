class Solution {
  public:
    void flatten(Node *root) 
    {
        // code here
        vector<Node*>v;
        pre(root,v);
        root=NULL;
        for(auto Node:v)
        {
            if(root==NULL)
            {
                root=Node;
                root->left=NULL;
            }
            else
            {
                root->right=Node;
                root->left=NULL;
                root=root->right;
            }
        }
    }
    void pre(Node* root, vector<Node*>&v)
    {
        if(root==NULL)
        {
            return;
        }
        v.push_back(root);
        pre(root->left,v);
        pre(root->right,v);
    }
};