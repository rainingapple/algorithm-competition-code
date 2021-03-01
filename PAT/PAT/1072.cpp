//#include<iostream>
//#include <string>
//using namespace std;
//const int INF = 1000000000;
//int n, m, k, ds, tn;
//int d[1020][1020];
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
//void Floyd() {
//	for (int k = 1;k <= tn;k++) {
//		for (int u = 1;u <= tn;u++) {
//			for (int v = 1;v <= tn;v++) {
//				if (d[u][k] != INF && d[k][v] != INF && d[u][v] > d[u][k] + d[k][v]) {
//					d[u][v] = d[u][k] + d[k][v];
//				}
//			}
//		}
//	}
//}
//int main() {
//	cin >> n >> m >> k >> ds;
//	tn = n + m;
//	fill(d[0], d[0] + 1020 * 1020, INF);
//	for (int i = 1;i <= tn;i++) {
//		d[i][i] = 0;
//	}
//	for (int i = 0;i < k;i++) {
//		string u, v;
//		int dis;
//		cin >> u >> v >> dis;
//		d[fuc1(u)][fuc1(v)] = dis;
//		d[fuc1(v)][fuc1(u)] = dis;
//	}
//	Floyd();
//	double avg_min = INF;
//	int ans_index = -1;
//	int min_dis = 0;
//	for (int i = n + 1;i <= tn;i++) {
//		int min = INF, sum = 0, p_min = INF;
//		double avg;
//		for (int j = 1;j <= n;j++) {
//			if (d[i][j] < p_min) {
//				p_min = d[i][j];
//			}
//			if (d[i][j] > ds) {
//				p_min = INF;
//				break;
//			}
//			else {
//				sum += d[i][j];
//			}
//		}
//		avg = (sum*1.0) / n;
//		if (p_min > min_dis) {
//			ans_index = i;
//			avg_min = avg;
//			min_dis = p_min;
//		}
//		else if (p_min == min_dis) {
//			if (avg < avg_min) {
//				ans_index = i;
//				avg_min = avg;
//			}
//		}
//	}
//	if (min_dis == INF) {
//		cout << "No Solution";
//	}
//	else {
//		cout << fuc2(ans_index) << endl;
//		printf("%.1f %.1f", min_dis * 1.0, avg_min);
//	}
//	return 0;
//}