////这个是最差的处理，应该去遍历商店，而不应该去遍历目的地，我这种会直接升级一个次方的复杂度
////我试了一试各种剪枝优化，都没用。
////这个的理论实践复杂度是，k*m*n^2,这样几乎和暴力遍历没有任何区别,
////虽然实际肯定比这个好一点，但就和希尔排序一样，掩盖不了根本的垃圾，50分
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
//struct bill {
//	int x;
//	int y;
//	int count;
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
//bill bills[1000005];
//bool barriers[1005][1005];
//bool inq[1005][1005];
//int min_dis(int x1, int y1, int x2, int y2) {
//	//计算两点最短距离，如果最短都比现在的长那就没必要算了。
//	return abs(x1 - x2) + abs(y1 - y2);
//}
//bool cmp(pos p1, pos p2) {
//	return min_dis(des.x, des.y, p1.x, p1.y) < min_dis(des.x, des.y, p2.x, p2.y);
//}
//bool test(int x, int y) {
//	if (x > n || x<1 || y>n || y < 1)
//		return false;
//	if (barriers[x][y] == true)
//		return false;
//	if (inq[x][y] == true)
//		return false;
//	return true;
//}
//int BFS(int x1, int y1, int x2, int y2) {
//	int min_step = INF;
//	int X[4] = { 0,0,+1,-1 };
//	int Y[4] = { +1,-1,0,0 };
//	fill(inq[0], inq[0] + 1005 * 1005, false);
//	queue<node> q;
//	q.push(node(x1, y1, 0));
//	inq[x1][y1] = true;
//	while (!q.empty()) {
//		node top = q.front();
//		q.pop();
//		if (top.x == x2 && top.y == y2) {
//			if (top.step < min_step) {
//				min_step = top.step;
//			}
//			break;
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
//	return min_step;
//}
//void fuc1(int x2, int y2, int count) {
//	int min_cost = INF;
//	des.x = x2;
//	des.y = y2;
//	sort(shop, shop + m, cmp);
//	for (int i = 0;i < m;i++) {
//		int x1 = shop[i].x;
//		int y1 = shop[i].y;
//		if (min_dis(x1, y1, x2, y2) < min_cost) {
//			int n_dis = BFS(x1, y1, x2, y2);
//			if (n_dis < min_cost) {
//				min_cost = n_dis;
//			}
//		}
//	}
//	ans += count * min_cost;
//}
//int main() {
//	scanf("%d%d%d%d", &n, &m, &k, &d);
//	for (int i = 0;i < m;i++) {
//		scanf("%d%d", &shop[i].x, &shop[i].y);
//	}
//	for (int i = 0;i < k;i++) {
//		int x, y, count;
//		scanf("%d%d%d", &bills[i].x, &bills[i].y, &bills[i].count);
//	}
//	for (int i = 0;i < d;i++) {
//		int x, y;
//		scanf("%d%d", &x, &y);
//		barriers[x][y] = true;
//	}
//	for (int i = 0;i < k;i++) {
//		fuc1(bills[i].x, bills[i].y, bills[i].count);
//	}
//	cout << ans;
//	return 0;
//}