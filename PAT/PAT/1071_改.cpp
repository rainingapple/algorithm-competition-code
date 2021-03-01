//#include<iostream>
////结果上来看这个效率ok
//#include<string>
//#include<map>
//#include<sstream>
//using namespace std;
//int main() {
//	map<string, int> m;
//	string s,temp;
//	getline(cin, s);
//	for (int i = 0;i < s.size();i++) {
//		if (isalnum(s[i]))
//			temp.push_back(tolower(s[i]));
//		else {
//			if (!temp.empty()) {
//				m[temp]++;
//				temp.clear();
//			}
//		}
//	}
//	if (!temp.empty())
//		m[temp]++;
//	int max = 0;
//	string ans;
//	for (auto it = m.begin();it != m.end();it++) {
//		if (it->second > max) {
//			max = it->second;
//			ans = it->first;
//		}
//	}
//	cout << ans << " " << max;
//	return 0;
//}