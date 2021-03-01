//#pragma warning(disable:4996)
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int a[100005];
//bool b[100005];
//int n, m, pre;
//vector<int> v;
//vector<int> ans[300];
//int main() {
//	scanf("%d%d", &n, &m);
//	for (int i = 0;i < n;i++) {
//		scanf("%d", &a[i]);
//	}
//	int ceng = 0;
//	while (true) {
//		int flag = true;
//		int i = 0;
//		int k = m;
//		for (;i < n;i++) {
//			if (b[i] == false) {
//				v.push_back(a[i]);
//				b[i] = true;
//				k--;
//			}
//			if (k == 0)
//				break;
//		}
//		sort(v.begin(), v.end());
//		ans[ceng].push_back(v[0]);
//		pre = v[0];
//		v.erase(v.begin());
//		for (i = 0;i < n;i++) {
//			if (b[i] == false) {
//				int temp = a[i];
//				if (temp < pre) {
//					flag = false;
//					if (!v.empty()) {
//						sort(v.begin(), v.end());
//						ans[ceng].push_back(v[0]);
//						pre = v[0];
//						v.erase(v.begin(), v.begin() + 1);
//					}
//					else {
//						v.clear();
//						break;
//					}
//				}
//				else {
//					v.push_back(temp);
//					sort(v.begin(), v.end());
//					ans[ceng].push_back(v[0]);
//					pre = v[0];
//					v.erase(v.begin(), v.begin() + 1);
//					b[i] = true;
//				}
//			}
//		}
//		if (v.size() >= 1) {
//			for (int k = 0;k < v.size();k++) {
//				ans[ceng].push_back(v[k]);
//			}
//			v.clear();
//		}
//		if (flag) {
//			break;
//		}
//		ceng++;
//	}
//	for (int i = 0;i <= ceng;i++) {
//		for (int j = 0;j < ans[i].size();j++) {
//			cout << ans[i][j];
//			if (j != ans[i].size() - 1) {
//				cout << " ";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}