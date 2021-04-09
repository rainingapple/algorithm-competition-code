//#include<iostream>
//#include<string>
//#pragma warning(disable:4996)
//using namespace std;
//int N, M, K, a, b, c;
//int relt[105][105];
//int father[105];
//int find_father(int x) {
//	int a = x;
//	while (x != father[x])
//		x = father[x];
//	while (a != father[a]) {
//		int z = a;
//		a = father[a];
//		father[z] = x;
//	}
//	return x;
//}
//void Union(int x, int y)
//{
//	int dadA = find_father(x);
//	int dadB = find_father(y);
//	if (dadA != dadB)
//		father[dadA] = dadB;
//}
//int main() {
//	fill(relt[0], relt[0] + 105 * 105, 0);
//	scanf("%d%d%d", &N, &M, &K);
//	for (int i = 1;i <= N;i++)
//		father[i] = i;
//	while (M--) {
//		scanf("%d%d%d", &a, &b, &c);
//		relt[a][b] = relt[b][a] = c;
//		if (c == 1)
//			Union(a, b);
//	}
//	while (K--) {
//		scanf("%d%d", &a, &b);
//		if (relt[a][b] == 1)
//			printf("No problem\n");
//		else if (relt[a][b] == 0)
//			printf("OK\n");
//		else {
//			if (find_father(a)==find_father(b))
//				printf("OK but...\n");
//			else
//				printf("No way\n");
//		}
//	}
//	return 0;
//}