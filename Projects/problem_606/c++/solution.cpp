// 606. Construct String from Binary Tree
class Solution
{
    public:
    string tree2str(TreeNode* t)
    {
        if (t == NULL) return "";
        
        std::string s = to_string(t->val);
        
        if (t->right != NULL)
        {
            s += "(" + tree2str(t->left) + ")";
            s += "(" + tree2str(t->right) + ")";
        }
        else if (t->left != NULL)
        {
            s += "(" + tree2str(t->left) + ")";
        }
        
        return s;
    }
};