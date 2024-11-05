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

void display(TreeNode* root)
{
    if(root->left == NULL && root->right == NULL)
    {
        cout<<root->data<<"\t";
    }
    else if (root->left == NULL)
    {
        cout<<root->data<<"\t";
        display(root->right);
    }
    else if (root->right == NULL)
    {
        cout<<root->data<<"\t";
        display(root->left);
    }
    else 
    {
        cout<<root->data<<"\t";
        display(root->left);
        display(root->right);
    }
}

 vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL)
        {
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int level_nodes = q.size();
            vector<int> curr_level;
            for(int i=0; i<level_nodes; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                curr_level.push_back(node->data);

                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
            }

            ans.push_back(curr_level);
        }
        return ans;
    }

TreeNode* construct_tree(vector<int>& inorder, vector<int>& preorder, int left, int right, int& index)
{
    if(left > right)
    {
        return NULL;
    }
    int rootval = preorder[index];
    TreeNode* root = new TreeNode(rootval);
    int n;
    index++;
    //cout<<rootval<<endl;
    //return root;
    if(left == right)
    {
        return root;
    }
    for (int i=left; i<=right; i++)
    {
        if (inorder[i] == rootval)
        {
            n = i;
            break;
        }
    }
    root->left = construct_tree(inorder, preorder, left, n-1, index);
    root->right = construct_tree(inorder, preorder, n+1, right, index);
    return root;
}

int main()
{
    vector<int> inorder;
    vector<int> preorder;
    inorder = {4,2,1,5,3};
    preorder = {1,2,4,3,5};
    int index = 0;
    TreeNode* root = construct_tree(inorder, preorder, 0, 4, index);
    vector<vector<int>> ans = levelOrder(root);
    for (int i=0; i<ans.size(); i++)
    {
        for (int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
}