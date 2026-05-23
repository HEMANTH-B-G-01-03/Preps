#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void getLeaves(TreeNode* root, vector<int>& leaves) {
    if (!root) return;
    if (!root->left && !root->right) {
        leaves.push_back(root->val);
        return;
    }
    getLeaves(root->left, leaves);
    getLeaves(root->right, leaves);
}

TreeNode* buildSampleTree() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    return root;
}

int main() {
    TreeNode* root = buildSampleTree();
    vector<int> leaves;
    getLeaves(root, leaves);
    
    cout << "Leaf nodes: ";
    for (int leaf : leaves) {
        cout << leaf << " ";
    }
    cout << endl;
    
    // TODO: Clean up memory if needed (deallocate tree nodes)
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;
    
    return 0;
}

