////����кö��״�㣬���ڴ�������ע�ͱ����
////��סֻ�иı䴫���Ǹ�ָ�뱾���ʱ�����Ҫ*&��������������insert��L��R
//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct node {
//	node* lchild, * rchild;
//	int height; //��Ҫ��������AVL���������Ҫ���Ǳ�BST��һ���ֶ�
//	int data;
//};
//node* newnode(int x) {
//	node *temp= new node;
//	temp->data = x;
//	temp->height = 1;//�߶ȵĳ�ʼ��������
//	temp->lchild = NULL;
//	temp->rchild = NULL;
//	return temp;
//}
//int getheight(node* root) {
//	if (root == NULL) {
//		return 0;//ע��߶Ȳ�Ҫ��ֱ�ӵ�root->height����Ϊ����NULL�ᷢ������
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
//	updateheight(root);//��Ҫ��������������
//	updateheight(temp);
//	root = temp;//��Ҫ�������ĸ�Ȩ
//}
//void R(node*& root) {
//	node* temp = root->lchild;
//	root->lchild = temp->rchild;
//	temp->rchild = root;
//	updateheight(root);//ע�����������updateroot��Ҳ�����Ȱ���֦���£��ٸ���������
//	updateheight(temp);
//	root = temp;
//}
//void insert(node*& root,int x) {
//	if (root == NULL) {
//		root = newnode(x);
//		return;
//	}
//	//ע��������С�ںţ�������һ����������ν�ģ���Ϊ�����Ĳ�Ӱ�졣
//	if (root->data > x) {
//		insert(root->lchild, x);
//		updateheight(root);//ע������ı����root�ĸ߶ȣ�������⣬��Ϊÿһ��insert����Ӧ��֤����Ľڵ㼰�����涼Ӧ���ǵ��õģ���������Ҫ�����root
//		if (getbalancerate(root) == 2) {
//			if (getbalancerate(root->lchild) == 1) {
//				R(root);
//			}
//			else if (getbalancerate(root->lchild) == -1) {
//				L(root->lchild);//ע�����ȱ�root->lchild�����ĸ�
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
//	node* root = NULL;//�����ʼ����NULL��Ҫ��newnode
//	for (int i = 0;i < n;i++) {
//		cin >> a[i];
//	}
//	for (int i = 0;i < n;i++) {
//		insert(root, a[i]);
//	}
//	cout << root->data;
//	return 0;
//}