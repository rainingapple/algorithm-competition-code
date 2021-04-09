//#include<iostream>
//#pragma warning(disable:4996)
//#define ll long long
//using namespace std;
//int n;
//struct factor {
//	ll up;
//	ll down;
//	factor(ll a, ll b) :up(a), down(b) {}
//};
//ll gcd(ll a, ll b) {
//	if (b > a) swap(a, b);
//	while (true) {
//		int res = a % b;
//		if (res == 0)return b;
//		a = b;
//		b = res;
//	}
//}
//factor trans(factor f) {
//	if (f.up == 0) return f;
//	ll commonfac = gcd(abs(f.up), abs(f.down));
//	f.up /= commonfac;
//	f.down /= commonfac;
//	return f;
//}
//factor add(factor f1, factor f2) {
//	return factor(f1.up * f2.down + f2.up * f1.down, f1.down * f2.down);
//}
//int main() {
//	scanf("%d", &n);
//	factor ans(0, 1), temp(0, 1);
//	while (n--) {
//		scanf("%lld/%lld", &temp.up, &temp.down);
//		ans = trans(add(ans, temp));
//	}
//	if (ans.up % ans.down == 0) {
//		printf("%lld", ans.up / ans.down);
//	}
//	else if (abs(ans.up) > ans.down) {
//		printf("%lld %lld/%lld", ans.up / ans.down, abs(ans.up) % ans.down, ans.down);
//	}
//	else {
//		printf("%lld/%lld", ans.up, ans.down);
//	}
//	return 0;
//}