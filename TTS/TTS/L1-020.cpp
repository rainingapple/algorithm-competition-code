//#include<iostream>
//#include<map>
//#include<vector>
//using namespace std;
//int n, m, ptotal, pid;
//map<int, bool> ma;
//vector<int> v;
//int main() {
//	cin >> n;
//	while (n--) {
//		cin >> ptotal;
//		if (ptotal == 1) {
//			cin >> pid;
//			continue;
//		}
//		while (ptotal--) {
//			cin >> pid;
//			ma[pid] = true;
//		}
//	}
//	cin >> m;
//	while (m--) {
//		cin >> pid;
//		if (ma[pid] == false) {
//			v.push_back(pid);
//			ma[pid] = true;
//		}
//	}
//	if (v.empty()) {
//		cout << "No one is handsome";
//		return 0;
//	}
//	for (int i = 0;i < v.size();i++) {
//		i != v.size() - 1 ? printf("%05d ", v[i]) : printf("%05d", v[i]);
//	}
//	return 0;
//}