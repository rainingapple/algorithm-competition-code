//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//vector<string> v;
//bool cmp(const string& s1, const string& s2) {//±È½Ïº¯Êý 
//	return s1 + s2 < s2 + s1;
//}
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0;i < n;i++) {
//		string s;
//		cin >> s;
//		v.push_back(s);
//	}
//	sort(v.begin(), v.end(), cmp);
//	string ans = "";
//	for (int i = 0;i < v.size();i++) {
//		ans = ans + v[i];
//	}
//	int mark = 0;
//	while (mark != ans.size() - 1 && ans[mark] == '0')
//		mark++;
//	ans = ans.substr(mark, ans.size() - mark);
//	cout << ans;
//	return 0;
//}