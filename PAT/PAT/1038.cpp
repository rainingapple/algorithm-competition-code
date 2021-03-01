//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//vector<string> v;
//bool cmp_first(string s1_p, string s2_p) {
//	int mark1 = 0, mark2 = 0;
//	while (s1_p[mark1] == '0')
//		mark1++;
//	while (s2_p[mark2] == '0')
//		mark2++;
//	string s1 = s1_p.substr(mark1, s1_p.size() - mark1);
//	string s2 = s2_p.substr(mark2, s2_p.size() - mark2);
//	int i = 0, j = 0;
//	for (;i < s1.size() && j < s2.size();i++, j++) {
//		if (s1[i] != s2[j]) {
//			return s1[i] < s2[j];
//		}
//	}
//	if (i < s1.size()) {
//		bool flag = s1[i] < s2[0];
//		return flag;
//	}
//	if (j < s2.size()) {
//		bool flag = s2[j] > s1[0];
//		return flag;
//	}
//	return false;
//}
//bool cmp(string s1, string s2) {
//	int i = 0, j = 0;
//	for (;i < s1.size() && j < s2.size();i++, j++) {
//		if (s1[i] != s2[j]) {
//			return s1[i] < s2[j];
//		}
//	}
//	if (i < s1.size()) {
//		bool flag = s1[i] < s2[0];
//		return flag;
//	}
//	if (j < s2.size()) {
//		bool flag = s2[j] > s1[0];
//		return flag;
//	}
//	return false;
//}
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0;i < n;i++) {
//		string s;
//		cin >> s;
//		v.push_back(s);
//	}
//	sort(v.begin(), v.end(), cmp_first);
//	int now = 0;
//	string ans;
//	ans = ans + v[0];
//	v.erase(v.begin(), v.begin() + 1);
//	sort(v.begin(), v.end(), cmp);
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