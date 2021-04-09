//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int n, pre[1005], mid[1005], t = 0;
//vector<int> v;
//bool flag;
//struct node {
//	int data;
//	node* left;
//	node* right;
//};
//node* solve(int a1, int b1, int a2, int b2) {
//	if (a1 > b1)
//		return NULL;
//	int index = a2;
//	node* root = new node;
//	root->data = pre[a1];
//	root->left = root->right = NULL;
//	for (;index <= b2;index++) {
//		if (mid[index] == pre[a1])
//			break;
//	}
//	int len1 = index - a2;
//	root->left = solve(a1 + 1, a1 + len1, a2, index - 1);
//	root->right = solve(a1 + len1 + 1, b1, index + 1, b2);
//	return root;
//}
//node* solve_rever(int a1, int b1, int a2, int b2) {
//	if (a1 > b1)
//		return NULL;
//	int index = b2;
//	node* root = new node;
//	root->data = pre[a1];
//	root->left = root->right = NULL;
//	for (;index >= a2;index--) {
//		if (mid[index] == pre[a1])
//			break;
//	}
//	int len1 = index - a2;
//	root->left = solve(a1 + 1, a1 + len1, a2, index - 1);
//	root->right = solve(a1 + len1 + 1, b1, index + 1, b2);
//	return root;
//}
//bool judge(int start, int end) {
//	if (start > end)
//		return true;
//	int mst = pre[start];
//	int mark1 = end + 1;
//	for (int i = start + 1;i <= end;i++) {
//		if (pre[i] >= mst)
//		{
//			mark1 = i;
//			break;
//		}
//	}
//	for (int i = mark1;i <= end;i++) {
//		if (pre[i] < mst)
//			return false;
//	}
//	return judge(start + 1, mark1 - 1) && judge(mark1, end);
//}
//bool judge_rever(int start, int end) {
//	if (start > end)
//		return true;
//	int mst = pre[start];
//	int mark1 = end + 1;
//	for (int i = start + 1;i <= end;i++) {
//		if (pre[i] < mst)
//		{
//			mark1 = i;
//			break;
//		}
//	}
//	for (int i = mark1;i <= end;i++) {
//		if (pre[i] >= mst)
//			return false;
//	}
//	return judge_rever(start + 1, mark1 - 1) && judge_rever(mark1, end);
//}
//void postorder(node* root) {
//	if (root == NULL)
//		return;
//	postorder(root->left);
//	postorder(root->right);
//	v.push_back(root->data);
//}
//int main() {
//	cin >> n;
//	for (int i = 1;i <= n;i++) {
//		cin >> pre[i];
//		mid[i] = pre[i];
//	}
//	if (judge(1, n)) {
//		sort(mid + 1, mid + n + 1);
//		node* root = solve(1, n, 1, n);
//		postorder(root);
//		cout << "YES\n";
//		for (int i = 0;i < v.size();i++) {
//			i != v.size() - 1 ? cout << v[i] << " " : cout << v[i];
//		}
//	}
//	else if (judge_rever(1, n)) {
//		sort(mid + 1, mid + n + 1, greater<int>{});
//		node* root = solve_rever(1, n, 1, n);
//		postorder(root);
//		cout << "YES\n";
//		for (int i = 0;i < v.size();i++) {
//			i != v.size() - 1 ? cout << v[i] << " " : cout << v[i];
//		}
//	}
//	else {
//		cout << "NO";
//	}
//	return 0;
//}