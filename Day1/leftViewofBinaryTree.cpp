/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int> v;
    if (root == NULL)
        return v;
    queue<TreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        int c = q.size();
        for (int i = 0; i < c; i++)
        {
            TreeNode<int> *x = q.front();
            q.pop();
            if (x->left != NULL)
                q.push(x->left);
            if (x->right != NULL)
                q.push(x->right);
            if (i == 0)
                v.push_back(x->data);
        }
    }
    return v;
}