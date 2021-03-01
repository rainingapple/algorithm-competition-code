////注意这个在VS中写auto，end和cend可以自动转换，但是ccf垃圾系统不行，注意严谨的规范。
//#include<iostream>
//#include<regex>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//vector<string> v;
//unordered_map<string, string> mp;
//int n, m;
//string temp;
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
//	regex r("\\{\\{ ([^\\}]+) \\}\\}");
//	smatch result;
//	for (int i = 0;i < v.size();i++) {
//		string s = v[i];
//		auto index = s.cbegin();
//		while (regex_search(index, s.cend(), result, r)) {
//			for (;index != result[0].first;index++) {
//				printf("%c", *index);
//			}
//			auto k = mp.find(result[1]);
//			printf("%s", k != mp.cend() ? k->second.c_str() : "");
//			index = result[0].second;
//		}
//		for (;index != s.cend();index++) {
//			printf("%c", *index);
//		}
//		puts("");
//	}
//	return 0;
//}