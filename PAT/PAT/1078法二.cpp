////我觉得这个题10000的范围是不需要使用完整的素数表的
////仅仅使用检验就行，更快
//#include<iostream>
//#include<math.h>
//#define MAXSize 10020
//#pragma warning(disable:4996)
//using namespace std;
//int M_size, N, temp;
//bool tis[20000];
//bool prime[MAXSize];
//bool isprime(int x) {
//	if (x <= 1) return false;
//	int sqrted = sqrt(x);
//	for (int i = sqrted;i >= 2;i--) {
//		if (x % i == 0) {
//			return false;
//		}
//	}
//	return true;
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
//	for (int i = M_size;;i++) {
//		if (isprime(i)) {
//			M_size = i;
//			break;
//		}
//	}
//	while (prime[M_size])
//		++M_size;
//	for (int i = 0;i < N - 1;i++)
//		test_pis(true);
//	test_pis(false);
//	return 0;
//}