void inOrderTraversal(Node* root) {
	//LNR
	if(root == NULL)
		return;

	inOrderTraversal(root->left);
	cout << root->data << " ";
	inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root) {
	//LRN
	if(root == NULL)
		return;

	postOrderTraversal(root->left);
	postOrderTraversal(root->right);
	cout << root->data << " ";
}
void preOrderTraversal(Node* root) {
	//NLR
	if(root == NULL)
		return;

	cout << root->data << " ";
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
}
