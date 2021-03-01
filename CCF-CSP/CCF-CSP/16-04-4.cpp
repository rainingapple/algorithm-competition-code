////这个题起初维护的时候没有想到可以回退这种情况
////也就是说vis失效了
////解决方案是给vis采用三维加上时间，同时必须采用BFS，也就是说如果你想回溯，可以，但是如果先前的BFS把他true了，就不行。
////升维是最好的解决方案。
//#include<iostream>
//#include<queue>
//using namespace std;
//struct node {
//	int a;
//	int b;
//};
//struct record {
//	int x;
//	int y;
//	int nt;
//	record(int a, int b, int c) :x(a), y(b), nt(c) {}
//};
//int n, m, t, min_t = 100000000;
//int r, c, a, b;
//node G[105][105];
//bool inq[105][105][305];
//int X[4] = { 0,0,1,-1 };
//int Y[4] = { 1,-1,0,0 };
//bool check(int x, int y, int nt) {
//	if (x<1 || y<1 || x>n || y>m) {
//		return false;
//	}
//	if (inq[x][y][nt] == true) {
//		return false;
//	}
//	int left = G[x][y].a;
//	int right = G[x][y].b;
//	if (nt >= left && nt <= right) {
//		return false;
//	}
//	return true;
//}
//void BFS(int x,int y,int time) {
//	queue<record> q;
//	q.push(record(x, y, time));
//	while (!q.empty()) {
//		record r = q.front();
//		q.pop();
//		x = r.x;
//		y = r.y;
//		time = r.nt;
//		if (x == n && y == m) {
//			if (time - 1 < min_t)
//				min_t = time - 1;
//			return;
//		}
//		for (int i = 0;i < 4;i++) {
//			int xnew = x + X[i];
//			int ynew = y + Y[i];
//			if (check(xnew, ynew, time)) {
//				inq[xnew][ynew][time] = true;
//				q.push(record(xnew, ynew, time + 1));
//			}
//		}
//	}
//}
//int main() {
//	cin >> n >> m >> t;
//	while (t--) {
//		cin >> r >> c;
//		cin >> G[r][c].a >> G[r][c].b;
//	}
//	inq[1][1][0] = true;
//	BFS(1,1,1);
//	cout << min_t;
//	return 0;
//}