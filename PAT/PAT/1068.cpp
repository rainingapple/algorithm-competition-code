//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int a[10005];
//int dp[10005][105];
//vector<int> temp_path;
//vector<int> path;
//int n, m;
//bool cmp(int s1, int s2) {
//	return s1 < s2;
//}
//void check() {
//	sort(temp_path.begin(), temp_path.end(), cmp);
//	/*cout << "Now check" << endl;
//	for (int i = 0;i < temp_path.size();i++) {
//		cout << temp_path[i];
//	}
//	cout << endl;*/
//	for (int i = 0;i < temp_path.size() && i < path.size();i++) {
//		if (temp_path[i] < path[i]) {
//			path = temp_path;
//			return;
//		}
//		else if (temp_path[i] > path[i]) {
//			return;
//		}
//	}
//	return;
//}
//void DFS(int index, int v) {
//	if (v == m) {
//		/*for (int i = 0;i < temp_path.size();i++) {
//			cout << temp_path[i];
//		}
//		cout << endl;*/
//		check();
//		return;
//	}
//	if (v > m || index >= n)
//		return;
//	temp_path.push_back(a[index]);
//	DFS(index + 1, v + a[index]);
//	temp_path.pop_back();
//	DFS(index + 1, v);
//}
//int main() {
//	cin >> n >> m;
//	for (int i = 0;i < n;i++) {
//		cin >> a[i];
//	}
//	path.push_back(10000);
//	DFS(0, 0);
//	if (path.size() == 1 && path[0] == 10000)
//		cout << "No Solution";
//	else {
//		for (int i = 0;i < path.size();i++) {
//			cout << path[i];
//			if (i != path.size() - 1)
//				cout << " ";
//		}
//	}
//	return 0;
//}