////这里很久没有写分数运算了，写的和模板不太一样
//#include<iostream>
//#pragma warning(disable:4996)
//using namespace std;
//int n;
//long long nu, de;
//long long nume, deno;
//
//long long find_com(long long a, long long b) {
//	a = abs(a);b = abs(b);
//	if (a < b) swap(a, b);
//	while (b) {
//		long long temp = b;
//		b = a % b;
//		a = temp;
//	}
//	return a;
//}
//void add_dec(long long a, long long b) {
//	long long com = find_com(a, b);
//	a /= com;b /= com;
//	nu = nu * b + a * de;
//	de = de * b;
//	com = find_com(nu, de);
//	nu /= com;de /= com;
//}
//int main() {
//	scanf("%d%lld/%lld", &n, &nu, &de);
//	for (int i = 1;i < n;i++) {
//		scanf("%lld/%lld", &nume, &deno);
//		add_dec(nume, deno);
//	}
//	long long ig = nu / de, res = nu % de;
//	if (ig != 0) {
//		printf("%lld ", ig);
//	}
//	if (res != 0) {
//		ig == 0 ? printf("%lld/%lld", res, de) : printf("%lld/%lld", abs(res), de);
//	}
//	return 0;
//}