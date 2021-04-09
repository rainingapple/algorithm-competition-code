//#include<iostream>
//using namespace std;
//int n;
//string s;
//bool flag = false;
//int main() {
//	int w[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
//	char cw[11] = { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };
//	cin >> n;
//	while (n--) {
//		cin >> s;
//		int ans = 0;
//		for (int i = 0;i < 17;i++) {
//			ans += (s[i] - '0') * w[i];
//		}
//		if (cw[ans % 11] != s[17]) {
//			cout << s << endl;
//			flag = true;
//		}
//	}
//	if (!flag)
//		cout << "All passed";
//	return 0;
//}