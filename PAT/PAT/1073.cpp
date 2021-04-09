//#include<iostream>
//#include <string>
//#include<algorithm>
//using namespace std;
//int main() {
//	string str;
//	cin >> str;
//	if (str[0] == '-') {
//		cout << "-";
//	}
//	int pos = str.find('E');
//	string str_l = str[1]+str.substr(3, pos - 3);
//	string str_r = str.substr(pos + 1, str.size() - pos - 1);
//	//cout << str_l << " " << str_r << endl;
//	int trans = 1 + stoi(str_r);
//	int index = 0;
//	if (trans >= 1) {
//		for (;index < trans;index++) {
//			if (index < str_l.size()) {
//				cout << str_l[index];
//			}
//			else {
//				cout << "0";
//			}
//		}
//		if (index < str_l.size())
//			cout << ".";
//		for (;index < str_l.size();index++) {
//			cout << str_l[index];
//		}
//	}
//	else {
//		cout << "0.";
//		for (int i = abs(trans);i > 0;i--) {
//			cout << '0';
//		}
//		for (;index < str_l.size();index++) {
//			cout << str_l[index];
//		}
//	}
//	return 0;
//}