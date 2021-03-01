//#include<iostream>
//#include<queue>
//#include<algorithm>
//#pragma warning(disable:4996)
//using namespace std;
//const int INF = 1000000000;
//struct pos {
//	int x;
//	int y;
//};
//struct node {
//	int x;
//	int y;
//	int step;
//	node(int a, int b, int c) :x(a), y(b), step(c) {}
//};
//int n, m, k, d;
//pos des;
//long long ans = 0;
//pos shop[1000005];
//int bills[1005][1005];
//bool barriers[1005][1005];
//bool inq[1005][1005];
//bool test(int x, int y) {
//	if (x > n || x<1 || y>n || y < 1)
//		return false;
//	if (barriers[x][y] == true)
//		return false;
//	if (inq[x][y] == true)
//		return false;
//	return true;
//}
//void BFS() {
//	int X[4] = { 0,0,+1,-1 };
//	int Y[4] = { +1,-1,0,0 };
//	fill(inq[0], inq[0] + 1005 * 1005, false);
//	queue<node> q;
//	for (int i = 0;i < m;i++) {
//		q.push(node(shop[i].x, shop[i].y,0));
//		inq[shop[i].x][shop[i].y] = true;
//	}
//	while (!q.empty()) {
//		node top = q.front();
//		q.pop();
//		if (bills[top.x][top.y]>0) {
//			ans += (long long)bills[top.x][top.y] * top.step;
//		}
//		for (int i = 0;i < 4;i++) {
//			int x3 = top.x + X[i];
//			int y3 = top.y + Y[i];
//			if (test(x3, y3)) {
//				q.push(node(x3, y3, top.step + 1));
//				inq[x3][y3] = true;
//			}
//		}
//	}
//}
//int main() {
//	scanf("%d%d%d%d", &n, &m, &k, &d);
//	for (int i = 0;i < m;i++) {
//		scanf("%d%d", &shop[i].x, &shop[i].y);
//	}
//	for (int i = 0;i < k;i++) {
//		int x, y, count;
//		scanf("%d%d%d", &x, &y, &count);
//		bills[x][y] += count;
//	}
//	for (int i = 0;i < d;i++) {
//		int x, y;
//		scanf("%d%d", &x, &y);
//		barriers[x][y] = true;
//	}
//	BFS();
//	cout << ans;
//	return 0;
//}