////�����õ���һ������Ȥ�Ľ��ۣ���������Բ��ܴ���8000*8000��int����Ϊ�пռ��256MB������
////Ҳ����˵��Ű���һ��int4B���㣬���ֻ�ܿ���ô�������20005*20005��Ȼ�ǲ������ֳ���ͼ
////�´ο���͵��һ�£������ж�һ�´����Ҫʲô�̶ȵĿռ�
////���������ʵ�����Ǹ�����ֱ�����⣬��ǰû���������ѧһ��
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