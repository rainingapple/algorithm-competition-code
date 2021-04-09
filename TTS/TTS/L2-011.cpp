//#include<iostream>
//#include<queue>
//#include<vector>
//#pragma warning(disable:4996)
//using namespace std;
//struct node {
//	int data;
//	node* left;
//	node* right;
//};
//int N;
//int mid[35];
//int pre[35];
//vector<int> ans;
//node* build_tree(int pre1, int pre2, int mid1, int mid2) {
//	if (pre1 > pre2)
//		return NULL;
//	int index = mid1;
//	for (;index <= mid2;index++) {
//		if (mid[index] == pre[pre1])
//			break;
//	}
//	int len = index - mid1;
//	node* root = new node;
//	root->data = pre[pre1];
//	root->left = build_tree(pre1 + 1, pre1 + len, mid1, index - 1);
//	root->right = build_tree(pre1 + len + 1, pre2, index + 1, mid2);
//	return root;
//}
//node* trans(node* root) {
//	if (root == NULL)
//		return NULL;
//	node* temp = root->left;
//	root->left = trans(root->right);
//	root->right = trans(temp);
//	return root;
//}
//void layer(node* root) {
//	queue<node*> q;
//	q.push(root);
//	while (!q.empty()) {
//		node* top = q.front();
//		q.pop();
//		ans.push_back(top->data);
//		if (top->left)
//			q.push(top->left);
//		if (top->right)
//			q.push(top->right);
//	}
//}
//int main() {
//	scanf("%d", &N);
//	for (int i = 1;i <= N;i++)
//		scanf("%d", &mid[i]);
//	for (int i = 1;i <= N;i++)
//		scanf("%d", &pre[i]);
//	node* root = build_tree(1, N, 1, N);
//	root = trans(root);
//	layer(root);
//	for (int i = 0;i < ans.size();i++) {
//		i != ans.size() - 1 ? printf("%d ", ans[i]) : printf("%d", ans[i]);
//	}
//	return 0;
//}