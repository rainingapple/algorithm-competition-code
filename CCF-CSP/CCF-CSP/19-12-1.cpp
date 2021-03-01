//#include<iostream>
//using namespace std;
//bool judge(int x) {
//	if (x % 7 == 0)
//		return true;
//	while (x > 0) {
//		if (x % 10 == 7)
//			return true;
//		x = x / 10;
//	}
//	return false;
//}
//int main() {
//	int n, np = 0, nn = 1, num = 0;
//	int escape[4] = { 0 };
//	cin >> n;
//	while (num < n) {
//		if (judge(nn)) {
//			nn++;
//			escape[np]++;
//		}
//		else {
//			nn++;
//			num++;
//		}
//		np = (np + 1) % 4;
//	}
//	for (int i = 0;i < 4;i++) {
//		cout << escape[i] << endl;
//	}
//	return 0;
//}