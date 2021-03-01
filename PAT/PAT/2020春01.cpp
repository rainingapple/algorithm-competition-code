//#include<iostream>
//#include<string>
//#include<math.h>
//using namespace std;
//bool isPrime(string s) {
//	int x = stoi(s);
//	if (x == 1) {
//		return false;
//	}
//	int sqr = (int)sqrt(x * 1.0);
//	for (int i = 2;i < sqr;i++) {
//		if (x % i == 0)
//			return false;
//	}
//	return true;
//}
//int main() {
//	string s;
//	cin >> s;
//	int flag = true;
//	for (int i = 0;i < s.size();i++) {
//		cout << s.substr(i, s.size() - i) << " ";
//		if (isPrime(s.substr(i, s.size() - i))) {
//			cout << "Yes" << endl;
//		}
//		else {
//			cout << "No" << endl;
//			flag = false;
//		}
//	}
//	if (flag) {
//		cout << "All Prime!";
//	}
//	return 0;
//}