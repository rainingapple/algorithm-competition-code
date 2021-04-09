//#include<iostream>
//#include<queue>
//#include<vector>
//#pragma warning(disable:4996)
//using namespace std;
//int n, mid[35], post[35];
//vector<int> v;
//struct node {
//	int dta;
//	node* left;
//	node* right;
//};
//node* build_tree(int mid1, int mid2, int post1, int post2) {
//	if (mid1 > mid2)
//		return NULL;
//	node* root = new node;
//	root->dta = post[post2];
//	int index = mid1;
//	for (;index <= mid2;index++) {
//		if (mid[index] == post[post2])
//			break;
//	}
//	int len1 = index - mid1;
//	root->left = build_tree(mid1, index - 1, post1, post1 + len1 - 1);
//	root->right = build_tree(index + 1, mid2, post1 + len1, post2 - 1);
//	return root;
//}
//void layerorder(node* root) {
//	queue<node*> q;
//	q.push(root);
//	while (!q.empty()) {
//		node* top = q.front();
//		q.pop();
//		v.push_back(top->dta);
//		if (top->left != NULL)
//			q.push(top->left);
//		if (top->right != NULL)
//			q.push(top->right);
//	}
//}
//int main() {
//	scanf("%d", &n);
//	for (int i = 1;i <= n;i++)
//		scanf("%d", &post[i]);
//	for (int i = 1;i <= n;i++)
//		scanf("%d", &mid[i]);
//	node* root = build_tree(1, n, 1, n);
//	layerorder(root);
//	for (int i = 0;i < v.size();i++) {
//		i != v.size() - 1 ? printf("%d ", v[i]) : printf("%d", v[i]);
//	}
//	return 0;
//}