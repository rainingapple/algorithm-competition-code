//#pragma warning (disable:4996)
////这道题做的时候有致命的问题，那就是在使用了queue.pop()之后，还用q.size()
////虽然其他的都已经很熟悉了，但是看来有必要把一些不常使用的隐形的东西重新做一遍.
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//int a[1005];
//int b[1005];
//int main() {
//	int n, ng;
//	int layer = 0;//标志现在是选出第几轮失败者
//	queue<int> q;
//	queue<int> temp;
//	scanf("%d%d", &n, &ng);
//	for (int i = 0;i < n;i++) {
//		scanf("%d", &a[i]);
//	}
//	vector<vector<int>> ans(n);
//	for (int i = 0;i < n;i++) {
//		int temp;
//		scanf("%d", &temp);
//		q.push(temp);
//	}
//	while (true) {
//		if (q.size() == 1) {
//			ans[layer].push_back(q.front());
//			break;
//		}
//		int ms = q.size();
//		for (int i = 0;i < ms;) {
//			vector<int> v;
//			int win_weight = -100000000;
//			int mark = ng;
//			while (mark--) {
//				if (i >= ms)
//					break;
//				v.push_back(q.front());
//				q.pop();
//				i++;
//			}
//			for (int j = 0;j < v.size();j++) {
//				if (a[v[j]] > win_weight) {
//					win_weight = a[v[j]];
//				}
//			}
//			for (int j = 0;j < v.size();j++) {
//				if (a[v[j]] != win_weight) {
//					ans[layer].push_back(v[j]);
//				}
//				else {
//					q.push(v[j]);
//				}
//			}
//			v.clear();
//		}
//		layer++;
//	}
//	int rate = 1;
//	for (int i = layer;i >= 0;i--) {
//		for (int j = 0;j < ans[i].size();j++) {
//			b[ans[i][j]] = rate;
//		}
//		rate += ans[i].size();
//	}
//	for (int i = 0;i < n;i++) {
//		cout << b[i];
//		if (i != n - 1) {
//			cout << " ";
//		}
//	}
//	return 0;
//}