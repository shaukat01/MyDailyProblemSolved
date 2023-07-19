#include <iostream>
#include<queue>
using namespace std;

class Node {
        public:
        int data;
        Node* left;
        Node* right;

        Node(int data) {
                this->data = data;
                this->left = NULL;
                this->right = NULL;
        }
};
Node* insertIntoBST(Node* root, int data) {

        if(root == NULL) {
                //this is the first node we have to create
                root = new Node(data);
                return root;
        }

        //no the first node 

        if(root-> data > data) {
                //insert in left
                root->left = insertIntoBST(root->left, data);
        }
        else {
                //insert into right
                root->right = insertIntoBST(root->right, data);
        }
        return root;
}

void takeInput(Node* &root) {
        int data;
        cin >> data;

        while(data != -1) {
                root = insertIntoBST(root, data);
                cin >> data;
        }
}
int main() {
	  Node* root = NULL;
	  cout << "Enter the data for Node " << endl;
	  takeInput(root);
	  cout << "Printing the tree" << endl;
	  levelOrderTraversal(root);
	  cout << endl;
	//   cout << "Printing Inorder: " << endl;
	//   inOrderTraversal(root);
	//   cout << endl;
	//   cout << "Printing Preorder: " << endl;
	//   preOrderTraversal(root);
	//   cout << endl;
	//   cout << "Printing Postorder: " << endl;
	//   postOrderTraversal(root);

	// bool ans  = findNodeInBST(root,155);
	// cout << "present or not : " << ans << endl;
	// cout << endl <<" Minimum value: " << minVal(root) << endl;
	// cout << endl << "Maximum value: " << maxVal(root) << endl;

	root = deleteNodeInBST(root, 100);
	levelOrderTraversal(root);
	
  return 0;
}