////��������ά����ʱ��û���뵽���Ի����������
////Ҳ����˵visʧЧ��
////��������Ǹ�vis������ά����ʱ�䣬ͬʱ�������BFS��Ҳ����˵���������ݣ����ԣ����������ǰ��BFS����true�ˣ��Ͳ��С�
////��ά����õĽ��������
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