//#pragma warning(disable:4996)
//#include<iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//int main() {
//	int n, sz1, sz2, t1, t2;
//	string s1, a1, b1, s2, a2, b2;
//	cin >> n >> s1 >> s2;
//	t1 = stoi(s1);
//	t2 = stoi(s2);
//	if (s1.find('.') < s1.size()) {
//		int flag = s1.find('.');
//		sz1 = flag;
//		s1 = s1.substr(0, sz1) + s1.substr(flag + 1, s1.size() - flag);
//	}
//	else {
//		sz1 = s1.size();
//	}
//	if (t1 == 0) {
//	}
//	else {
//		while (s1.size() > 1 && s1[0] == '0') {
//			s1 = s1.substr(1, s1.size() - 1);
//			sz1--;
//		}
//	}
//	if (s2.find('.') < s2.size()) {
//		int flag = s2.find('.');
//		sz2 = flag;
//		s2 = s2.substr(0, sz2) + s2.substr(flag + 1, s2.size() - flag);
//	}
//	else {
//		sz2 = s2.size();
//	}
//	if (t2 == 0) {
//	}
//	else {
//		while (s2.size() > 1 && s2[0] == '0') {
//			s2 = s2.substr(1, s2.size() - 1);
//			sz2--;
//		}
//	}
//	if (sz1 != sz2) {
//		cout << "NO";
//		printf(" 0.%s*10^%d 0.%s*10^%d", s1.substr(0, n).c_str(), sz1, s2.substr(0, n).c_str(), sz2);
//	}
//	else {
//		if (s1.substr(0, n) != s2.substr(0,n)) {
//			printf("NO 0.%s*10^%d 0.%s*10^%d", s1.substr(0, n).c_str(), sz1, s2.substr(0,n).c_str(), sz2);
//		}
//		else {
//			printf("YES 0.%s*10^%d", s1.substr(0, n).c_str(), sz1);
//		}
//	}
//	return 0;
//}