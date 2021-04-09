//#include<iostream>
//#include<math.h>
//#define MAXSize 10020
//#pragma warning(disable:4996)
//using namespace std;
//int M_size, N, temp;
//bool tis[20000];
//bool prime[MAXSize];
//void findPrime() {
//	prime[0] = prime[1] = true;
//	for (int i = 2;i < MAXSize;++i)
//		if (!prime[i])
//			for (int j = i + i;j < MAXSize;j += i)
//				prime[j] = true;
//}
//void test_pis(bool flag) {
//	scanf("%d", &temp);
//	for (int i = 0;i < M_size;i++) {
//		int pis = (temp + i * i) % M_size;
//		if (!tis[pis]) {
//			flag ? printf("%d ", pis) : printf("%d", pis);
//			tis[pis] = true;
//			return;
//		}
//	}
//	flag ? printf("- ") : printf("-");
//}
//int main() {
//	scanf("%d%d", &M_size, &N);
//	findPrime();
//	while (prime[M_size])
//		++M_size;
//	for (int i = 0;i < N - 1;i++)
//		test_pis(true);
//	test_pis(false);
//	return 0;
//}