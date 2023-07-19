//assuming there are only unique values in tree
TreeNode* searchBST(TreeNode* root, int val) {
	///base case
	if(root == NULL) {
		return NULL;
	}

	if(root->val == val) 
		return root;
//assuming there are only unique values in tree
	// TreeNode* leftAns = false;
	// TreeNode* rightAns = false;
	
	if(val > root->val) {
		//right subtree me search karo
		return searchBST(root->right,  val);
	}
	else {
		return searchInBST(root->left,  val);
	}
}