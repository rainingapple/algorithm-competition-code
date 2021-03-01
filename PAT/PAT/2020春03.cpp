//#include<iostream>
//#include<vector>
//#include<set>
//using namespace std;
//int n, r, k, m;
//bool G[505][505];
//int main() {
//	fill(G[0], G[0] + 505 * 505, false);
//	cin >> n >> r >> k;
//	for (int i = 0;i < r;i++) {
//		int u, v;
//		cin >> u >> v;
//		G[u][v] = true;
//		G[v][u] = true;
//	}
//	cin >> m;
//	for (int i = 0;i < m;i++) {
//		vector<int> v[505];
//		set<int> st;
//		for (int j = 1;j <= n;j++) {
//			int temp;
//			cin >> temp;
//			v[temp].push_back(j);
//			st.insert(temp);
//		}
//		if (st.size() > k) {
//			cout << "Error: Too many species." << endl;
//		}
//		else if (st.size() < k) {
//			cout << "Error: Too few species." << endl;
//		}
//		else {
//			int flag = true;
//			for (auto it = st.begin();it != st.end();it++) {
//				int temp = *it;
//				for (int k = 0;k < v[temp].size();k++) {
//					for (int k2 = k + 1;k2 < v[temp].size();k2++) {
//						if (G[v[temp][k]][v[temp][k2]] == true) {
//							flag = false;
//							break;
//						}
//					}
//				}
//			}
//			if (flag)
//				cout << "Yes" << endl;
//			else {
//				cout << "No" << endl;
//			}
//		}
//	}
//}