//#include<iostream>
//#include<math.h>
//using namespace std;
//long long ori[11];
//long long a[11];
//long long rem[11];
//long long fuc(int x, int pos) {
//	if (pos == 1) {
//		if (x != 0)
//			return 1;
//		else
//			return 0;
//	}
//	if (x == 0) {
//		return 0;
//	}
//	if (x != 1) {
//		return x * ori[pos - 1] + pow(10, pos - 1);
//	}
//	else {
//		return ori[pos - 1] + 1 + rem[pos - 1];
//	}
//}
//int main() {
//	ori[0] = 0;
//	ori[1] = 1;
//	for (int i = 2;i <= 9;i++) {
//		ori[i] = pow(10, i - 1) + ori[i - 1] * 10;
//	}
//	int mess, mark = 1, temp = 0;
//	rem[0] = 0;
//	cin >> mess;
//	while (mess > 0) {
//		a[mark] = mess % 10;
//		rem[mark++] = a[mark] * pow(10, mark - 1) + rem[mark - 1];
//		mess = mess / 10;
//	}
//	long long ans = 0;
//	for (int i = 1;i < mark;i++) {
//		ans += fuc(a[i], i);
//	}
//	cout << ans;
//}