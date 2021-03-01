//#pragma warning(disable:4996)
//#include<iostream>
//#include <unordered_map>
//using namespace std;
//int main() {
//	int m, n;
//	unordered_map<int, int> ma;
//	scanf("%d%d", &m, &n);
//	for (int i = 0;i < n;i++) {
//		for (int j = 0;j < m;j++) {
//			int temp;
//			scanf("%d", &temp);
//			ma[temp]++;
//		}
//	}
//	int mark = 0;
//	int ans;
//	for (auto i = ma.begin();i != ma.end();i++) {
//		if (i->second > mark) {
//			mark = i->second;
//			ans = i->first;
//		}
//	}
//	cout << ans;
//	return 0;
//}