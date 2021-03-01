//#include<iostream>
//#include <map>
//using namespace std;
//int main() {
//	int n, m;
//	map<int, int> se;
//	cin >> n >> m;
//	for (int i = 0;i < n;i++) {
//		int temp;
//		cin >> temp;
//		se[temp]++;
//	}
//	bool flag = false;
//	for (auto it = se.begin();it != se.end();it++) {
//		if (se.find(m - it->first) != se.end()) {
//			if (it->first != (m - it->first)) {
//				cout << it->first << " " << m - it->first;
//				flag = true;
//				break;
//			}
//			else {
//				if (se[it->first] >= 2) {
//					cout << it->first << " " << m - it->first;
//					flag = true;
//					break;
//				}
//			}
//		}
//	}
//	if (flag == false) {
//		cout << "No Solution";
//	}
//	return 0;
//}