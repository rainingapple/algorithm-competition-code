////这个题首先我是用DFS写的，但是无论我怎么改都会超时
////看起来我和标答只是差了一个遍历顺序的问题
////后来，我发现DFS无法纠正比如1可以到234，而2可以到34，显然34是如果再通过2到达是多此一举的，无论我如何剪枝，都会在性能上有根本性的差异
////就类似于BFS中的vis必须是入队，而不是是否访问，这样性能上可以差十万八千里
////记住，选BFS还是DFS要分析之后再说
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