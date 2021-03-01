//#include<iostream>
//#include<vector>
//#include<math.h>
//using namespace std;
//vector<int> v;
//bool pot[100005];//潜藏的差距池
//bool exist[100005];//已经被说了的
//bool live[12];
//int a[12][1005];
//int p1, p2, n, m;
//void fuc() {
//	//处理
//	for (int k = 1;k <= m;k++) {
//		for (int i = 1;i <= n;i++) {
//			if (live[i] == false)
//				continue;
//			int temp = a[i][k];
//			if (exist[temp] == true || pot[temp] == false) {
//				printf("Round #%d: %d is out.\n", k, i);
//				live[i] = false;
//				continue;
//			}
//			exist[temp] = true;
//			v.push_back(temp);
//			for (int i = 0;i < v.size();i++) {
//				if (pot[abs(v[i] - temp)] == false)
//					pot[abs(v[i] - temp)] = true;
//			}
//		}
//	}
//	//找胜利者
//	vector<int> winner;
//	for (int i = 1;i <= n;i++) {
//		if (live[i] == true) {
//			winner.push_back(i);
//		}
//	}
//	if (winner.empty()) {
//		cout << "No winner.";
//	}
//	else {
//		cout << "Winner(s):";
//		for (int i = 0;i < winner.size();i++) {
//			cout << " " << winner[i];
//		}
//	}
//}
//int main() {
//	fill(live, live + 12, true);
//	fill(pot, pot + 100005, false);
//	fill(exist, exist + 100005, false);
//	cin >> p1 >> p2 >> n >> m;
//	for (int i = 1;i <= n;i++) {
//		for (int j = 1;j <= m;j++) {
//			cin >> a[i][j];
//		}
//	}
//	exist[p1] = true;
//	exist[p2] = true;
//	v.push_back(p1);
//	v.push_back(p2);
//	pot[abs(p1 - p2)] = true;
//	fuc();
//}