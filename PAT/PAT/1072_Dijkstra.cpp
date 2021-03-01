//事实证明，能用dijkstra就不要用FLoyd，这个题就是没审题
//#include<iostream>
//#include <string>
//using namespace std;
//const int INF = 1000000000;
//int n, m, k, ds, tn;
//int d[1020];
//int a[1020][1020];
//int min_dis = 0;
//double min_avg = INF;
//int index = -1;
//int fuc1(string s) {
//	if (s[0] == 'G') {
//		s = s.substr(1, s.size() - 1);
//		return stoi(s) + n;
//	}
//	else {
//		return stoi(s);
//	}
//}
//string fuc2(int x) {
//	if (x <= n) {
//		return to_string(x);
//	}
//	else {
//		return "G" + to_string(x - n);
//	}
//}
//void Dijkstra(int x) {
//	bool vis[1020];
//	fill(vis, vis + 1020, false);
//	fill(d, d + 1020, INF);
//	d[x] = 0;
//	for (int i = 0;i < tn;i++) {
//		int u = -1;
//		int min = INF;
//		for (int j = 1;j <= tn;j++) {
//			if (vis[j] == false && d[j] < min) {
//				u = j;
//				min = d[j];
//			}
//		}
//		if (u == -1)
//			return;
//		vis[u] = true;
//		for (int v = 1;v <= tn;v++) {
//			if (vis[v] == false && d[u]!=INF && a[u][v]!=INF && d[v] > d[u] + a[u][v]) {
//				d[v] = d[u] + a[u][v];
//			}
//		}
//	}
//	double avg = 0;
//	int sum = 0;
//	int pa_min = INF;
//	for (int i = 1;i <= n;i++) {
//		if (d[i] > ds)
//			return;
//		else {
//			if (d[i] < pa_min)
//				pa_min = d[i];
//			sum += d[i];
//		}
//	}
//	avg = (sum * 1.0) / n;
//	if (pa_min > min_dis)
//	{
//		index = x;
//		min_dis = pa_min;
//		min_avg = avg;
//	}
//	else if (pa_min == min_dis) {
//		if (min_avg > avg) {
//			index = x;
//			min_avg = avg;
//		}
//	}
//}
//int main() {
//	cin >> n >> m >> k >> ds;
//	tn = n + m;
//	fill(a[0], a[0] + 1020 * 1020, INF);
//	for (int i = 0;i < k;i++) {
//		string u, v;
//		int dis;
//		cin >> u >> v >> dis;
//		a[fuc1(u)][fuc1(v)] = dis;
//		a[fuc1(v)][fuc1(u)] = dis;
//	}
//	for (int i = n + 1;i <= tn;i++) {
//		Dijkstra(i);
//	}
//	if (index == -1)
//		cout << "No Solution";
//	else {
//		cout << fuc2(index) << endl;
//		printf("%.1f %.1f", min_dis * 1.0, min_avg);
//	}
//	return 0;
//}