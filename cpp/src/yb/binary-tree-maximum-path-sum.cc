//
// Created by shaharuk shaikh on 01/06/22.
//
#include<iostream>
using namespace std;

struct TreeNode {
  int val;
  TreeNode* right;
  TreeNode* left;

  TreeNode(): val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
 public:
  int res;
  int maxPathSum(TreeNode* root){
    res = root->val;
    dfs(root);
    return res;
  }
  int dfs(TreeNode* node){
    if(!node)
      return 0;
    
    int leftMax = dfs(node->left);
    int rightMax = dfs(node->right);

    leftMax = max(leftMax, 0);
    rightMax = max(rightMax, 0);
    // compute max path sum with split
    res = max(res, node->val + leftMax + rightMax);
    return node->val + max(leftMax, rightMax);
  }
};

int main(){
  // Example 1:
  TreeNode* root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->right = new TreeNode(3);
  // Output: 6

  /*// Example 2:
  TreeNode* root = new TreeNode(-10);
  root->left = new TreeNode(9);

  root->right = new TreeNode(20);
  root->right->left = new TreeNode(15);
  root->right->right = new TreeNode(7);
  // Output: 42*/

  /*// Example 3:
  TreeNode* root = new TreeNode(1);
  root->left = new TreeNode(60);
  root->right = new TreeNode(3);
  root->right->left = new TreeNode(4);
  root->right->right = new TreeNode(5);
  // Output: 69*/

  /*// Example 4:
  TreeNode* root = new TreeNode(-10);
  root->left = new TreeNode(-6);
  root->left->left = new TreeNode(-2);
  root->left->right = new TreeNode(-8);

  root->right = new TreeNode(10);
  root->right->left = new TreeNode(1);
  root->right->right = new TreeNode(13);
  // Output: 24
  */

  /*
  // Example 5:
  TreeNode* root = new TreeNode(0);
  root->left = new TreeNode(120);
  root->left->left = new TreeNode(-5);
  root->left->left->left = new TreeNode(-1);
  root->left->right = new TreeNode(-9);
  root->right = new TreeNode(6);
  root->right->left = new TreeNode(3);
  root->right->right = new TreeNode(4);
  // Output: 130
  */

  Solution sol;
  int sum = sol.maxPathSum(root);
  cout << "Max path sum is: " << sum << endl;
  return 0;
}