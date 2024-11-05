#include<bits/stdc++.h>

using namespace std;

class TreeNode
{
    public:
        int data;
        TreeNode* left;
        TreeNode* right;
    
    TreeNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void bfs(TreeNode* root)
{
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        TreeNode* temp = q.pop();
        if(temp == NULL)
        {
            
        }
    }
}

int main()
{
    TreeNode* root = new TreeNode(1);
    TreeNode* child = new TreeNode(2);
    root->left = child;
    child = new TreeNode(3);
    root->right = child;
    child = new TreeNode(4);
    root->left->left = child;
    child = new TreeNode(5);
    root->left->right = child;
    child = new TreeNode(6);
    root->right->left = child;
    child = new TreeNode(7);
    root->right->right = child;


}
