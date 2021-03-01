//这种分数的题，如果不按模板写，那么将会花费巨大的时间
//这次是第一次我做pat模拟时候写的，整整一个小时20分钟才做了14分，亏。。。。。。。
//#include<iostream>
//#include<string>
//#pragma warning(disable:4996)
//using namespace std;
//struct fen {
//	long long zi;
//	long long mu;
//};
//long long gcd(long long a, long long b) {
//	if (b == 0) {
//		return a;
//	}
//	else {
//		return gcd(b, a % b);
//	}
//}
//fen forma(fen f) {
//	if (f.mu < 0) {
//		f.zi = -f.zi;
//		f.mu = -f.mu;
//	}
//	if (f.zi == 0) {
//		f.mu = 1;
//	}
//	long long gc = gcd(abs(f.zi), abs(f.mu));
//	f.zi /= gc;
//	f.mu /= gc;
//	return f;
//}
//fen add(fen f1, fen f2) {
//	fen temp;
//	temp.zi = f1.zi * f2.mu + f2.zi * f1.mu;
//	temp.mu = f1.mu * f2.mu;
//	return forma(temp);
//}
//fen sub(fen f1, fen f2) {
//	fen temp;
//	temp.zi = (f1.zi * f2.mu - f2.zi * f1.mu);
//	temp.mu = f1.mu * f2.mu;
//	return forma(temp);
//}
//fen mul(fen f1, fen f2) {
//	fen temp;
//	temp.zi = (f1.zi * f2.zi);
//	temp.mu = (f1.mu * f2.mu);
//	return forma(temp);
//}
//fen div(fen f1, fen f2) {
//	fen temp;
//	temp.zi = (f1.zi * f2.mu);
//	temp.mu = (f1.mu * f2.zi);
//	return forma(temp);
//}
//void show(fen f) {
//	f = forma(f);
//	if (f.mu == 0) {
//		cout << "Inf";
//		return;
//	}
//	if (f.zi < 0) {
//		printf("(");
//	}
//	if (f.mu == 1) {
//		printf("%lld", f.zi);
//	}
//	else {
//		if (abs(f.zi) > abs(f.mu)) {
//			printf("%lld %lld/%lld", f.zi / f.mu, abs(f.zi) % f.mu, f.mu);
//		}
//		else {
//			printf("%lld/%lld", f.zi, f.mu);
//		}
//	}
//	if (f.zi < 0) {
//		printf(")");
//	}
//}
//int main() {
//	string s1, s2;
//	fen f1, f2;
//	scanf("%lld/%lld %lld/%lld", &f1.zi, &f1.mu, &f2.zi, &f2.mu);
//	show(f1);
//	cout << " + ";
//	show(f2);
//	cout << " = ";
//	show(add(f1, f2));
//	cout << endl;
//	show(f1);
//	cout << " - ";
//	show(f2);
//	cout << " = ";
//	show(sub(f1, f2));
//	cout << endl;
//	show(f1);
//	cout << " * ";
//	show(f2);
//	cout << " = ";
//	show(mul(f1, f2));
//	cout << endl;
//	show(f1);
//	cout << " / ";
//	show(f2);
//	cout << " = ";
//	show(div(f1, f2));
//	return 0;
//}