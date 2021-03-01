//#pragma warning (disable:4996)
//#include<iostream>
//#include<map>
//#include<math.h>
//using namespace std;
//map<int, int> m;
//bool is_prime(long x) {
//	if (x == 1) {
//		return false;
//	}
//	if (x == 2) {
//		return true;
//	}
//	long sqr = long(sqrt(x * 1.0));
//	for (long i = 2;i <= sqr;i++) {
//		if (x % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//int main() {
//	long x;
//	cin >> x;
//	int value = x;
//	long sqr = long(sqrt(x * 1.0));
//	for (long i = 2;i <= sqr;i++) {
//		if (x % i == 0 && is_prime(i)) {
//			m[i] = 1;
//			value = value / i;
//		}
//	}
//	for (auto i = m.begin();i != m.end();) {
//		if (value % i->first == 0) {
//			value = value / i->first;
//			i->second++;
//		}
//		else {
//			i++;
//		}
//	}
//	cout << x << "=";
//	if (m.empty()) {
//		cout << x;
//	}
//	else {
//		for (auto i = m.begin();i != m.end();i++) {
//			cout << i->first;
//			if (i->second != 1) {
//				cout << "^" << i->second;
//			}
//			i++;
//			if (i != m.end()) {
//				cout << "*";
//			}
//			i--;
//		}
//	}
//	return 0;
//}