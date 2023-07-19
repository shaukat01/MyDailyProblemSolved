TreeNode* deleteNode(TreeNode* root, int key) {
	
	//base cae
	if(root == NULL ) {
		return NULL;
	}
//cout << "Request recieved for " >> root->val << " with key" << key << endl;
	if(root->val == key) {
		//isi ko delete krna h 
		//4 cases 
		if(root->left == NULL && root->right == NULL) {
			//leaf node
			//delete root;
			return NULL;
		}
		else if(root->left == NULL && root->right != NULL) {
			TreeNode* child = root->right;
			//delete root;
			return child;
		}
		else if(root->left != NULL && root->right == NULL) {
			TreeNode* child  = root->left;
			//delete root;
			return child;
		}
		else {
			//both child
			//find inorder predecessor inb left subtree
			int inorderPre = maxVal(root->left);
			//replace root->val value with inorder predecessor
			root->val = inorderPre;
			//delete inorder predecessor from left subtree
			root->left = deleteNode(root->left,inorderPre);
			return root;
			
		}
		
	}
	else if(key > root -> val) {
		//right jana chahiye
		root->right =  deleteNode(root->right, key);
	}
	else if(key < root->val) {
		//left jana chahioye
		root->left = deleteNode(root->left, key);
	}
	return root;
}

