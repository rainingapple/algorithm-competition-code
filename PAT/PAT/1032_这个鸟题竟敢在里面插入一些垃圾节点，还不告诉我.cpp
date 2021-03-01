//#include<iostream>
//#include<map>
//using namespace std;
//map<int, int> fre;
//map<int, int> m;
//int main() {
//	ios::sync_with_stdio(false);
//	int ad1, ad2, n;
//	cin >> ad1 >> ad2 >> n;
//	fre[ad1]++;
//	fre[ad2]++;
//	for (int i = 0;i < n;i++) {
//		int id, next;
//		char temp;
//		cin >> id >> temp >> next;
//		m[id] = next;
//		fre[next]++;
//	}
//	bool flag = false;
//	while (true) {
//		if (fre[ad1] == 2)
//		{
//			flag = true;
//			break;
//		}
//		ad1 = m[ad1];
//	}
//	if (flag)
//		cout << ad1;
//	else
//		cout << -1;
//	return 0;
//}