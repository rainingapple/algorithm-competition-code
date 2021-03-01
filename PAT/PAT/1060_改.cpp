//#pragma warning(disable:4996)
//#include<iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//int n;
//void fuc(string s1, string& sout, int& ex) {
//	double t1 = stod(s1);
//	if (s1.find('.') < s1.size()) {
//		int flag = s1.find('.');
//		ex = flag;
//		s1 = s1.substr(0, ex) + s1.substr(flag + 1, s1.size() - flag);
//	}
//	else {
//		ex = s1.size();
//	}
//	if (t1 == 0) {
//		ex = 0;
//	}
//	else {
//		while (s1.size() > 1 && s1[0] == '0') {
//			s1 = s1.substr(1, s1.size() - 1);
//			ex--;
//		}
//	}
//	while (s1.size() < n) {
//		s1 = s1 + "0";
//	}
//	sout = s1.substr(0, n);
//	return;
//}
//int main() {
//	int ex1, ex2;
//	string s1, a1, s2, a2;
//	cin >> n >> s1 >> s2;
//	fuc(s1, a1, ex1);
//	fuc(s2, a2, ex2);
//	if (ex1 != ex2) {
//		printf("NO 0.%s*10^%d 0.%s*10^%d", a1.c_str(), ex1, a2.substr(0, n).c_str(), ex2);
//	}
//	else {
//		if (a1 != a2) {
//			printf("NO 0.%s*10^%d 0.%s*10^%d", a1.c_str(), ex1, a2.substr(0, n).c_str(), ex2);
//		}
//		else {
//			printf("YES 0.%s*10^%d", a1.c_str(), ex1);
//		}
//	}
//	return 0;
//}