
int minVal(Node* root) {
	Node* temp = root;
	if(temp == NULL) {
		return -1;
	}

	while(temp -> left != NULL) {
		temp = temp ->left;
	}
	return temp -> data;
}

int maxVal(TreeNode* root) {
	Node* temp = root;
	if(temp == NULL) {
		return -1;
	}

	while(temp -> right != NULL) {
		temp = temp ->right;
	}
	return temp -> val;
}