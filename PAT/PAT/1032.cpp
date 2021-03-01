//这个虽然他没说，但是里面由很多冗余点
//第三个样例，有的节点是空的，所以初始化有说法
//#include<iostream>
//#include<map>
//#include<vector>
//using namespace std;
//map<int, int> fre;
//map<int, int> m;
//vector<int> list1;
//vector<int> list2;
//int main() {
//	ios::sync_with_stdio(false);
//	int ad1, ad2, n;
//	cin >> ad1 >> ad2 >> n;
//	for (int i = 0;i < n;i++) {
//		int id, next;
//		char temp;
//		cin >> id >> temp >> next;
//		m[id] = next;
//	}
//	list1.push_back(ad1);
//	list2.push_back(ad2);
//	while (m[ad1] != -1) {
//		list1.push_back(m[ad1]);
//		ad1 = m[ad1];
//	}
//	while (m[ad2] != -1) {
//		cout << 2;
//		list2.push_back(m[ad2]);
//		ad2 = m[ad2];
//	}
//	for (int i = 0;i < list1.size();i++) {
//		fre[list1[i]]++;
//	}
//	for (int i = 0;i < list2.size();i++) {
//		if (fre[list2[i]] == 1) {
//			printf("%05d", list2[i]);
//			return 0;
//		}
//	}
//	cout << -1;
//	return 0;
//}