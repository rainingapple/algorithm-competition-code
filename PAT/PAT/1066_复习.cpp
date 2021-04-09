//#include<iostream>
//using namespace std;
//int n;
//struct node {
//	int data;
//	int height;
//	node* lchild;
//	node* rchild;
//};
//node* newnode(int x) {
//	node* Node = new node;
//	Node->data = x;
//	Node->height = 1;
//	Node->lchild = Node->rchild = NULL;
//	return Node;
//}
//int getheight(node*& root) {
//	if (root == NULL) {
//		return 0;
//	}
//	else {
//		return root->height;
//	}
//}
//void updateheight(node*& root) {
//	root->height = max(getheight(root->lchild), getheight(root->rchild)) + 1;
//}
//int getbalancerate(node* root) {
//	return getheight(root->lchild) - getheight(root->rchild);
//}
//void L(node*& root) {
//	node* temp = root->rchild;
//	root->rchild = temp->lchild;
//	temp->lchild = root;
//	updateheight(root);
//	updateheight(temp);
//	root = temp;
//}
//void R(node*& root) {
//	node* temp = root->lchild;
//	root->lchild = temp->rchild;
//	temp->rchild = root;
//	updateheight(root);
//	updateheight(temp);
//	root = temp;
//}
//void insert(node*& root,int x) {
//	if (root == NULL) {
//		root = newnode(x);
//		return;
//	}
//	else if (x < root->data) {
//		insert(root->lchild, x);
//		updateheight(root);
//		if (getbalancerate(root) == 2) {
//			if (getbalancerate(root->lchild) == 1) {
//				R(root);
//			}
//			else if(getbalancerate(root->lchild) == -1) {
//				L(root->lchild);
//				R(root);
//			}
//		}
//	}
//	else {
//		insert(root->rchild, x);
//		updateheight(root);
//		if (getbalancerate(root) == -2) {
//			if (getbalancerate(root->rchild) == -1) {
//				L(root);
//			}
//			else if (getbalancerate(root->rchild) == 1) {
//				R(root->rchild);
//				L(root);
//			}
//		}
//	}
//}
//int main() {
//	cin >> n;
//	node* root = NULL;
//	while (n--) {
//		int temp;
//		cin >> temp;
//		insert(root, temp);
//	}
//	cout << root->data;
//	return 0;
//}