/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int data) {
        data = data;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool isSymmetric(Node* root) {
        // code here
        map<int, vector<string>> m;
        cal(root,0,m);
        return pal(m);
    }
    void cal(Node* node, int r, map<int,vector<string>>&m)
    {
        if(node == NULL)
        {
            m[r].push_back("N");
            return;
        }
        
        m[r].push_back(to_string(node->data));
        cal(node->left,r+1,m);
        cal(node->right,r+1,m); 
    }
    bool pal(map<int,vector<string>>&m)
    {
        //cheak for each int of m , if the string i palandrome
        for(auto x : m)
    {
        vector<string> v = x.second;

        int i = 0;

        int j = v.size() - 1;

        while(i < j)
        {
            if(v[i] != v[j])
                return false;

            i++;
            j--;
        }
    }

    return true;

    }
};