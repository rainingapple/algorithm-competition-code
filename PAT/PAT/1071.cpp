////注意这个题目的意思是用所有非常规字符分割单词，所以不能仅理解为只能用空格分割。
//#include<iostream>
//#include<string>
//#include<map>
//#include<sstream>
//using namespace std;
//bool fuc(char c) {
//	return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
//}
//int main() {
//	map<string, int> m;
//	string s;
//	getline(cin, s);
//	/*int index = s.find('"');
//	if (index != string::npos)
//	{
//		s = s.substr(index + 1, s.size() - index - 2);
//	}*/
//	stringstream ss(s);
//	while (ss >> s) {
//		string temp;
//		for (int i = 0;i < s.size();i++) {
//			if (isalnum(tolower(s[i])))
//				temp.push_back(tolower(s[i]));
//		}
//		if(!temp.empty())
//		    m[temp]++;
//	}
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