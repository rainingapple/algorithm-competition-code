////���������������DFSд�ģ�������������ô�Ķ��ᳬʱ
////�������Һͱ��ֻ�ǲ���һ������˳�������
////�������ҷ���DFS�޷���������1���Ե�234����2���Ե�34����Ȼ34�������ͨ��2�����Ƕ��һ�ٵģ���������μ�֦���������������и����ԵĲ���
////��������BFS�е�vis��������ӣ��������Ƿ���ʣ����������Ͽ��Բ�ʮ���ǧ��
////��ס��ѡBFS����DFSҪ����֮����˵
//#include<iostream>
//#include<math.h>
//#pragma warning(disable:4996)
//using namespace std;
//const int INF = 1000000000;
//struct site {
//	int x;
//	int y;
//};
//int n, m, k, r, ans = INF;
//site s[205];
//bool G[205][205];
//bool vis[205];
//void DFS(int x,int ex,int total) {
//	if (x == 2) {
//		if (total < ans) {
//			ans = total;
//		}
//		return;
//	}
//	vis[x] = true;
//	for (int i = 2;i <= n + m;i++) {
//		if (G[x][i] == true && vis[i] == false && total+1 < ans) {
//			if (i > n) {
//				if (ex + 1 > k)
//					continue;
//				DFS(i, ex + 1, total + 1);
//			}
//			else {
//				DFS(i, ex, total + 1);
//			}
//		}
//	}
//	vis[x] = false;
//}
//int main() {
//	fill(G[0], G[0] + 205 * 205, false);
//	fill(vis, vis + 205, false);
//	scanf("%d%d%d%d", &n, &m, &k, &r);
//	for (int i = 1;i <= n + m;i++) {
//		scanf("%d%d", &s[i].x, &s[i].y);
//	}
//	for (int i = 1;i <= n + m;i++) {
//		for (int j = 1;j <= n + m;j++) {
//			if (i != j) {
//				double dis = hypot(abs(s[i].x - s[j].x), abs(s[i].y - s[j].y));
//				if (dis <= r) {
//					G[i][j] = true;
//					G[j][i] = true;
//				}
//			}
//		}
//	}
//	vis[1] = true;
//	DFS(1, 0, -1);
//	printf("%d", ans);
//	return 0;
//}