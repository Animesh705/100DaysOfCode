#include <iostream>
#include <algorithm>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
        return std::max(lh, rh) + 1;
    }
};

int main() {
    
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    Solution sol;
    std::cout << "Max depth: " << sol.maxDepth(root) << std::endl;

    return 0;
}