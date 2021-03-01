//#include<iostream>
//#include<regex>
//#include<vector>
//#include<map>
//using namespace std;
//vector<string> v;
//vector<regex> v2;
//vector<string> v3;
//map<string, string> mp;
//int n, m;
//string temp;
//void fuc1() {
//	for (auto i = mp.begin();i != mp.end();i++) {
//		v2.push_back(regex("\\{\\{ "+i->first+" \\}\\}"));
//		v3.push_back(i->second);
//	}
//	v2.push_back(regex("\\{\\{.*\\}\\}"));
//	v3.push_back("");
//}
//int main() {
//	cin >> n >> m;
//	getline(cin, temp);
//	while (n--) {
//		getline(cin, temp);
//		v.push_back(temp);
//	}
//	while (m--) {
//		string key, value;
//		getline(cin, temp);
//		int index = temp.find(" ");
//		key = temp.substr(0, index);
//		value = temp.substr(index + 2, temp.size() - index - 3);
//		mp[key] = value;
//	}
//	fuc1();
//	for (int i = 0;i < v.size();i++) {
//		string s = v[i];
//		for (int i = 0;i < v2.size();i++) {
//			s = regex_replace(s, v2[i], v3[i]);
//		}
//		cout << s << endl;
//	}
//}