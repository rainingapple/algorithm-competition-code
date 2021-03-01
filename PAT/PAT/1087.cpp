//#include<iostream>
//#include<map>
//#include<vector>
//using namespace std;
//const int INF = 1000000000;
//map<string, int> m1;
//map<int, string> m2;
//int n, m, des;
//string head_city;
//int happy[205];
//int c[205][205];
//int d[205];
//vector<int> pre[205];
//bool vis[205];
//void Dijkstra() {
//	fill(d, d + 205, INF);
//	fill(vis, vis + 205, false);
//	d[0] = 0;
//	for (int i = 0;i < n;i++) {
//		int u = -1, min = INF;
//		for (int j = 0;j < n;j++) {
//			if (vis[j]==false && d[j] < min) {
//				u = j;
//				min = d[j];
//			}
//		}
//		if (u == -1)
//			return;
//		vis[u] = true;
//		for (int j = 0;j < n;j++) {
//			if (vis[j] == false && c[u][j] != INF) {
//				if (d[j] > d[u] + c[u][j]) {
//					d[j] = d[u] + c[u][j];
//					pre[j].clear();
//					pre[j].push_back(u);
//				}
//				else if (d[j] == d[u] + c[u][j]) {
//					pre[j].push_back(u);
//				}
//			}
//		}
//	}
//}
//vector<int> temp_path;
//vector<int> path;
//int min_cost = INF;
//int min_happy = -1;
//int min_avg = -1;
//int num = 0;
//void check(int x) {
//	if (x == 0) {
//		num++;
//		temp_path.push_back(x);
//		int cost_sum = 0;
//		int happy_sum = 0;
//		double happy_avg = 0;
//		for (int i = 0;i < temp_path.size() - 1;i++) {
//			happy_sum += happy[temp_path[i]];
//		}
//		happy_avg = (happy_sum) / (temp_path.size() - 1);
//		if (happy_sum > min_happy) {
//			min_happy = happy_sum;
//			min_avg = happy_avg;
//			path = temp_path;
//		}
//		else if (happy_sum == min_happy) {
//			if (happy_avg > min_avg) {
//				min_avg = happy_avg;
//				path = temp_path;
//			}
//		}
//		temp_path.pop_back();
//		return;
//	}
//	temp_path.push_back(x);
//	for (int i = 0;i < pre[x].size();i++) {
//		check(pre[x][i]);
//	}
//	temp_path.pop_back();
//}
//int main() {
//	cin >> n >> m >> head_city;
//	m1[head_city] = 0;
//	m2[0] = head_city;
//	for (int i = 1;i < n;i++) {
//		string name;
//		int h;
//		cin >> name >> h;
//		m1[name] = i;
//		m2[i] = name;
//		if (name == "ROM") {
//			des = i;
//		}
//		happy[i] = h;
//	}
//	fill(c[0], c[0] + 205 * 205, INF);
//	for (int i = 0;i < m;i++) {
//		string u, v;
//		int cost;
//		cin >> u >> v >> cost;
//		c[m1[u]][m1[v]] = cost;
//		c[m1[v]][m1[u]] = cost;
//	}
//	Dijkstra();
//	check(des);
//	cout << num << " " << d[des] << " " << min_happy << " " << min_avg << endl;
//	for (int i = path.size() - 1;i >= 0;i--) {
//		cout << m2[path[i]];
//		if (i != 0) {
//			cout << "->";
//		}
//	}
//	return 0;