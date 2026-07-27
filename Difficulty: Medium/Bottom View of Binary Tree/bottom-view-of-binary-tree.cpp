/*
Definition for Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
        vector<int>v;
        if(root==NULL)
        return v;
        map<int,int> mp;
        queue<pair<int,Node*>>q;
        q.push({0,root});
        while(!q.empty())
        {
            auto p=q.front();
            int col=p.first ;
            Node* newnode=p.second;
            mp[col]=newnode->data;
            q.pop();
            if(newnode->left) q.push({col-1,newnode->left});
            if(newnode->right) q.push({col+1,newnode->right});
        }
        for(auto col:mp)
        {
            v.push_back(col.second);
        }
        return v;
    }
};