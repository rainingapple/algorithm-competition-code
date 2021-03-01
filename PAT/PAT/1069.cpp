//#include<iostream>
//#include<algorithm>
//#include <string>
//using namespace std;
//int main() {
//	string a, b;
//	cin >> a;
//	while (a.size() < 4) {
//		a = '0' + a;
//	}
//	if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3]) {
//		printf("%s - %s = 0000", a.c_str(), a.c_str());
//		return 0;
//	}
//	while (true) {
//		sort(a.begin(), a.end());
//		for (int i = 3;i >= 0;i--)
//			b.push_back(a[i]);
//		int x = stoi(a);
//		int y = stoi(b);
//		a.clear();
//		b.clear();
//		if (x < y) {
//			swap(x, y);
//		}
//		int z = x - y;
//		printf("%04d - %04d = ", x, y);
//		printf("%04d\n", z);
//		if (z == 6174)
//			break;
//		int m = 4;
//		while (m--) {
//			a.push_back(z % 10 + '0');
//			z = z / 10;
//		}
//	}
//	return 0;
//}