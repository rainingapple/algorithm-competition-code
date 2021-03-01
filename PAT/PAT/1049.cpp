//#include<iostream>
//#include<math.h>
//using namespace std;
//int ori[11];
//int a[11];
//int rem[11];
//int fuc(int x, int pos) {
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
//int check(int N) {
//	int ans = 0;
//	int left = N / 10, right = 0, current = N % 10;
//	for (int i = 1;right != N;i *= 10) {
//		ans += left * i + (current == 0 ? 0 : current == 1 ? (right + 1) : i);
//		right += current * i;
//		current = left % 10;
//		left /= 10;
//	}
//	return ans;
//}
//int myf(int mess) {
//	ori[0] = 0;
//	ori[1] = 1;
//	for (int i = 2;i <= 9;i++) {
//		ori[i] = pow(10, i - 1) + ori[i - 1] * 10;
//	}
//	int mark = 1, temp = 0;
//	rem[0] = 0;
//	while (mess > 0) {
//		a[mark] = mess % 10;
//		rem[mark++] = a[mark] * pow(10, mark - 1) + rem[mark - 1];
//		mess = mess / 10;
//	}
//	int ans = 0;
//	for (int i = 1;i < mark;i++) {
//		ans += fuc(a[i], i);
//	}
//	return ans;
//}
//int main() {
//	for (int i = 1;i <= 9000000;i++) {
//		if (check(i) == myf(i)) {
//			cout << i << " " << check(i) << myf(i) << endl;
//		}
//	}
//}