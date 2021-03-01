////这个有好多易错点，我在代码中用注释标出来
////记住只有改变传参那个指针本身的时候才需要*&，比如这个里面的insert，L和R
//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct node {
//	node* lchild, * rchild;
//	int height; //不要忘了这是AVL红黑树，不要忘记比BST多一个字段
//	int data;
//};
//node* newnode(int x) {
//	node *temp= new node;
//	temp->data = x;
//	temp->height = 1;//高度的初始化别忘了
//	temp->lchild = NULL;
//	temp->rchild = NULL;
//	return temp;
//}
//int getheight(node* root) {
//	if (root == NULL) {
//		return 0;//注意高度不要用直接的root->height，因为遇见NULL会发生错误
//	}
//	else {
//		return root->height;
//	}
//}
//void updateheight(node *root) {
//	root->height = max(getheight(root->lchild), getheight(root->rchild)) + 1;
//}
//int getbalancerate(node* root) {
//	return getheight(root->lchild) - getheight(root->rchild);
//}
//void L(node*& root) {
//	node* temp = root->rchild;
//	root->rchild = temp->lchild;
//	temp->lchild = root;
//	updateheight(root);//不要忘记是两个更新
//	updateheight(temp);
//	root = temp;//不要忘记最后的赋权
//}
//void R(node*& root) {
//	node* temp = root->lchild;
//	root->lchild = temp->rchild;
//	temp->rchild = root;
//	updateheight(root);//注意这里必须先updateroot，也就是先把树枝更新，再更新树根。
//	updateheight(temp);
//	root = temp;
//}
//void insert(node*& root,int x) {
//	if (root == NULL) {
//		root = newnode(x);
//		return;
//	}
//	//注意这里是小于号，但是这一道题是无所谓的，因为根在哪不影响。
//	if (root->data > x) {
//		insert(root->lchild, x);
//		updateheight(root);//注意这里改变的是root的高度，不难理解，因为每一次insert我理应保证插入的节点及其下面都应该是调好的，所以我需要变得是root
//		if (getbalancerate(root) == 2) {
//			if (getbalancerate(root->lchild) == 1) {
//				R(root);
//			}
//			else if (getbalancerate(root->lchild) == -1) {
//				L(root->lchild);//注意是先变root->lchild再来改根
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
//	int n;
//	int a[25];
//	cin >> n;
//	node* root = NULL;//这个初始化给NULL不要给newnode
//	for (int i = 0;i < n;i++) {
//		cin >> a[i];
//	}
//	for (int i = 0;i < n;i++) {
//		insert(root, a[i]);
//	}
//	cout << root->data;
//	return 0;
//}