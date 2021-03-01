//#include<iostream>
//#include <algorithm>
//#include <map>
//using namespace std;
//int d[100005];
//int fin[100005];
//int main() {
//	int n;
//	int sum = 0;
//	cin >> n;
//	for (int i = 1;i <= n;i++) {
//		cin >> d[i];
//		sum += d[i];
//	}
//	int m;
//	cin >> m;
//	int temp = 0;
//	fin[1] = 0;
//	for (int i = 2;i <= n;i++) {
//		temp += d[i-1];
//		fin[i] = temp;
//	}
//	for (int i = 0;i < m;i++) {
//		int a, b;
//		cin >> a >> b;
//		if (a > b) {
//			swap(a, b);
//		}
//		cout << min(fin[b] - fin[a],sum-(fin[b] - fin[a])) << endl;
//	}
//	return 0;
//}