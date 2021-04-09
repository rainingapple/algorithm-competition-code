//#include<iostream>
//#include<algorithm>
//#include <string>
//#pragma warning(disable:4996)
//using namespace std;
//int N, max_len=100000000;
//string temp;
//string a[105];
//string find_suffix() {
//	string suffix;
//	for (int k = 0;k < max_len;k++) {
//		char tis = a[0][a[0].size() - 1 - k];
//		for (int i = 1;i < N;i++) {
//			if (a[i][a[i].size() - 1 - k] != tis) {
//				return suffix;
//			}
//		}
//		suffix.push_back(tis);
//	}
//	return suffix;
//}
//int main() {
//	scanf("%d", &N);
//	getline(cin, temp);
//	for (int i = 0;i < N;i++) {
//		getline(cin, a[i]);
//	}
//	for (int i = 0;i < N;i++) {
//		max_len = min(max_len, (int)a[i].size());
//	}
//	string re_result = find_suffix();
//	if (re_result.empty()) {
//		printf("nai");
//	}
//	else {
//		for (int i = re_result.size() - 1;i >= 0;i--) {
//			printf("%c", re_result[i]);
//		}
//	}
//	return 0;
//}