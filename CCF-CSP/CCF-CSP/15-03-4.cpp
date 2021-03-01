////这个题得到了一个很有趣的结论，开数组绝对不能大于8000*8000的int，因为有空间的256MB的限制
////也就是说大概按照一个int4B来算，大概只能开这么大，像这个20005*20005显然是不是那种稠密图
////下次可以偷鸡一下，先验判断一下大概需要什么程度的空间
////但是这个题实际上是个树的直径问题，以前没见过，这次学一下
//#include<iostream>
//using namespace std;
//const int INF = 1000000000;
//static int G[20005][20005];
//int n, m, ans = 0;
//void Floyd() {
//	for (int i = 1;i <= n + m;i++) {
//		G[i][i] = 0;
//	}
//	for (int k = 1;k <= n + m;k++) {
//		for (int i = 1;i <= n + m;i++) {
//			for (int j = 1;j <= n + m;j++) {
//				if (G[i][k]!=INF&&G[k][j]!=INF&&G[i][k] + G[k][j] < G[i][j]) {
//					G[i][j] = G[i][k] + G[k][j];
//				}
//			}
//		}
//	}
//	for (int i = 1;i <= n + m;i++) {
//		for (int j = 1;j <= n + m;j++) {
//			if (G[i][j]!=INF&&G[i][j] > ans) {
//				ans = G[i][j];
//			}
//		}
//	}
//}
//int main() {
//	fill(G[0], G[0] + 20005 * 20005, INF);
//	cin >> n >> m;
//	for (int i = 2;i <= n;i++) {
//		int temp;
//		cin >> temp;
//		G[temp][i] = 1;
//		G[i][temp] = 1;
//	}
//	for (int i = 1;i <= m;i++) {
//		int temp;
//		cin >> temp;
//		G[temp][i + n] = 1;
//		G[i + n][temp] = 1;
//	}
//	Floyd();
//	cout << ans;
//	return 0;
//}