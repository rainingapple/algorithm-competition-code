////小心后面算fac的时候要小于等于sqr不能小于，否则9会出错
//#pragma warning (disable:4996)
//#include<iostream>
//#include<math.h>
//using namespace std;
//struct node {
//	int time;
//	int value;
//};
//node fac[100010];
//int prime[100010];
//int pnum = 0;
//int fnum = 0;
//bool is_prime(long x) {
//	if (x == 1) {
//		return false;
//	}
//	long sqr = (long)sqrt(x * 1.0);
//	for (long i = 2;i <= sqr;i++) {
//		if (x % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//void find_prime() {
//	for (int i = 2;i < 10010;i++) {
//		if (is_prime(i))
//			prime[pnum++] = i;
//	}
//}
//int main() {
//	long x;
//	cin >> x;
//	find_prime();
//	if (x == 1)
//		cout << "1=1";
//	else {
//		cout << x << "=";
//		long sqr = (long)sqrt(1.0 * x);
//		for (int i = 0;i < pnum && prime[i] <= sqr;i++) {
//			if (x % prime[i] == 0) {
//				fac[fnum].time = 0;
//				fac[fnum].value = prime[i];
//				while (x % prime[i] == 0) {
//					fac[fnum].time++;
//					x = x / prime[i];
//				}
//				fnum++;
//			}
//			if (x == 1)
//				break;
//		}
//		if (x != 1) {
//			fac[fnum].value = x;
//			fac[fnum].time = 1;
//			fnum++;
//		}
//	}
//	for (int i = 0;i < fnum;i++) {
//		cout << fac[i].value;
//		if (fac[i].time != 1) {
//			cout << "^" << fac[i].time;
//		}
//		if (i != fnum - 1) {
//			cout << "*";
//		}
//	}
//	return 0;
//}