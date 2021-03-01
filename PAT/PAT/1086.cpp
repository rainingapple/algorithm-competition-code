//#include<iostream>
//#include<stack>
//#include<vector>
//#include<string>
//using namespace std;
//struct node {
//	node* lchild;
//	node* rchild;
//	int value;
//};
//stack<int> sk;
//int n;
//vector<int> pre;
//vector<int> inorder;
//vector<int> ans;
//node* createtree(int prel, int prer, int inl, int inr) {
//	if (prel > prer) {
//		return NULL;
//	}
//	node* temp = new node;
//	temp->value = pre[prel];
//	int index = -1;
//	for (int i = inl;i <= inr;i++) {
//		if (inorder[i] == pre[prel]) {
//			index = i;
//			break;
//		}
//	}
//	int l_len = index - inl;
//	int r_len = inr - index;
//	temp->lchild = createtree(prel + 1, prel + l_len, inl, l_len + inl - 1);
//	temp->rchild = createtree(l_len + 1 + prel, prer, inl + l_len + 1, inr);
//	return temp;
//}
//void postorder(node *tree) {
//	if (tree == NULL)
//		return;
//	postorder(tree->lchild);
//	postorder(tree->rchild);
//	ans.push_back(tree->value);
//}
//int main() {
//	cin >> n;
//	for (int i = 0;i < 2*n;i++) {
//		string s;
//		cin >> s;
//		if (s == "Push") {
//			int x;
//			cin >> x;
//			sk.push(x);
//			pre.push_back(x);
//		}
//		else {
//			int x = sk.top();
//			sk.pop();
//			inorder.push_back(x);
//		}
//	}
//	node* tree = createtree(0, pre.size() - 1, 0, inorder.size() - 1);
//	postorder(tree);
//	for (int i = 0;i < ans.size();i++) {
//		cout << ans[i];
//		if (i != ans.size() - 1)
//			cout << " ";
//	}
//	return 0;
//}