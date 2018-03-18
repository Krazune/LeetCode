// 101. Symmetric Tree
class Solution
{
    bool allSubtreesSymmetric(struct TreeNode* p, struct TreeNode* q)
    {
        if (p == NULL && q == NULL) return true;

        if (p == NULL || q == NULL || p->val != q->val) return false;

        return allSubtreesSymmetric(p->left, q->right) && allSubtreesSymmetric(p->right, q->left);
    }

    public:
    bool isSymmetric(TreeNode* root)
    {
        return allSubtreesSymmetric(root, root);
    }
};