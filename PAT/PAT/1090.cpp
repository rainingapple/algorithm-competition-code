//#include<iostream>
//#include<vector>
//#include<math.h>
//using namespace std;
//vector<int> yiji;
//struct node {
//	int layer;
//	vector<int> child;
//};
//node a[100005];
//int total = 0;
//int deepth = -1;
//void DFS(int x) {
//	if (a[x].layer > deepth) {
//		deepth = a[x].layer;
//		total = 1;
//	}
//	else if (a[x].layer == deepth) {
//		total++;
//	}
//	for (int i = 0;i < a[x].child.size();i++) {
//		a[a[x].child[i]].layer = a[x].layer + 1;
//		DFS(a[x].child[i]);
//	}
//}
//int main() {
//	int n;
//	double p, r;
//	cin >> n >> p >> r;
//	for (int i = 0;i < n;i++) {
//		int temp;
//		cin >> temp;
//		if (temp == -1) {
//			yiji.push_back(i);
//			a[i].layer = 1;
//		}
//		else {
//			a[temp].child.push_back(i);
//		}
//	}
//	for (int i = 0;i < yiji.size();i++) {
//		DFS(yiji[i]);
//	}
//	double ans = p;
//	for (int i = 0;i < deepth - 1;i++) {
//		ans = ans + ans * 0.01 * r;
//	}
//	printf("%.2f %d", ans, total);
//}