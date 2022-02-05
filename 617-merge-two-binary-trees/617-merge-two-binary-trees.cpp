class Solution {
    
    
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (!root1 && !root2) {
            return nullptr;
        }
        
        auto* mergedNode = new TreeNode();
        
        if (root1) {
            mergedNode->val += root1->val;
        }
        if (root2) {
            mergedNode->val += root2->val;
        }
        
        // for root1 and root2, dereference only if not null
        mergedNode->left = mergeTrees(root1 ? root1->left : root1, 
                                      root2 ? root2->left : root2);
        
        mergedNode->right = mergeTrees(root1 ? root1->right : root1, 
                                       root2 ? root2->right : root2);
        
        return mergedNode;
    }
};