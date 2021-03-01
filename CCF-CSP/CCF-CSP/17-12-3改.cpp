//#include<iostream>
//#include<string>
//#include<set>
//#include<vector>
//#include<sstream>
//#include<regex>
//#include<map>
//#include<algorithm>
//using namespace std;
//string da1[32] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec","Sun","Mon","Tue","Wed","Thu","Fri","Sat","0","1","2","3","4","5","6","7","8","9","10","11","12" };
//int da2[32] = { 1,2,3,4,5,6,7,8,9,10,11,12,0,1,2,3,4,5,6,0,1,2,3,4,5,6,7,8,9,10,11,12 };
//int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//int mark[5] = { 59,23,31,12,6 };
//struct node {
//	int minutes;
//	int hours;
//	int day;
//	int month;
//	int year;
//	node(string s) {
//		year = stoi(s.substr(0, 4));
//		month = stoi(s.substr(4, 2));
//		day = stoi(s.substr(6, 2));
//		hours = stoi(s.substr(8, 2));
//		minutes = stoi(s.substr(10, 2));
//	}
//	node() {
//
//	}
//};
//struct command {
//	/*这个是对应的数据
//	set<int> minutes;
//	set<int> hours;
//	set<int> day_of_month;
//	set<int> month;
//	set<int> day_of_week;*/
//	set<int> st[5];
//	string s;
//};
//struct record {
//	node x;
//	string s;
//	record(node a, string b) :x(a), s(b) {}
//};
//vector<record> ans_list;
//vector<command> c;
//map<string, int> mp;
//void fuc1(string s) {
//	stringstream ss(s);
//	command t_command;
//	for (int i = 0;i < 5;i++) {
//		ss >> s;
//		if (s[0] == '*') {
//			if (i == 0 || i == 1 || i == 4) {
//				for (int j = 0;j <= mark[i];j++) {
//					t_command.st[i].insert(j);
//				}
//			}
//			else {
//				for (int j = 1;j <= mark[i];j++) {
//					t_command.st[i].insert(j);
//				}
//			}
//		}
//		else {
//			regex r(",");
//			s = regex_replace(s, r, " ");
//			stringstream ss2(s);
//			while (ss2 >> s) {
//				if (s.find('-') != string::npos) {
//					int pos = s.find('-');
//					int fi, ed;
//					if (i < 3) {
//						fi = stoi(s.substr(0, pos));
//						ed = stoi(s.substr(pos + 1, s.size() - pos - 1));
//					}
//					else {
//						fi = mp[s.substr(0, pos)];
//						ed = mp[s.substr(pos + 1, s.size() - pos - 1)];
//					}
//					for (int k = fi;k <= ed;k++) {
//						t_command.st[i].insert(k);
//					}
//				}
//				else {
//					if (i < 3)
//						t_command.st[i].insert(stoi(s));
//					else
//						t_command.st[i].insert(mp[s]);
//				}
//			}
//		}
//	}
//	ss >> s;
//	t_command.s = s;
//	c.push_back(t_command);
//}
//bool isrun(int x) {
//	if ((x % 400 == 0) || (x % 4 == 0 && x % 100 != 0)) {
//		return true;
//	}
//	return false;
//}
//int sub2(node x) {
//	int k = 0;
//	for (int i = 1970;i < x.year;i++) {
//		if (isrun(i))
//			k = k + 366;
//		else
//			k = k + 365;
//	}
//	if (isrun(x.year))
//		month[2] = 29;
//	for (int i = 1;i < x.month;i++) {
//		k += month[i];
//	}
//	k += x.day;
//	return k;
//}
//bool cmp(node n1, node n2) {
//	if (n1.year != n2.year) {
//		return n1.year < n2.year;
//	}
//	else if(n1.month!=n2.month){
//		return n1.month < n2.month;
//	}
//	else if (n1.day != n2.day) {
//		return n1.day < n2.day;
//	}
//	else if (n1.hours != n2.hours) {
//		return n1.hours < n2.hours;
//	}
//	else if(n1.minutes!=n2.minutes){
//		return n1.minutes < n2.minutes;
//	}
//	else {
//		return true;
//	}
//}
//bool cmp2(record r1, record r2) {
//	return cmp(r1.x, r2.x);
//}
//void fuc2(node n1, node n2,int index) {
//	node temp;
//	for (int i = n1.year;i <= n2.year;i++) {
//		temp.year = i;
//		for (auto i2 = c[index].st[3].begin();i2 != c[index].st[3].end();i2++) {
//			if (isrun(i)) {
//				if (*i2 == 2 && c[index].st[2].find(29) == c[index].st[2].end()) {
//					continue;
//				}
//				else if (c[index].st[2].find(month[*i2]) == c[index].st[2].end()) {
//					continue;
//				}
//			}
//			else {
//				if (c[index].st[2].find(month[*i2]) == c[index].st[2].end()) {
//					continue;
//				}
//			}
//			temp.month = *i2;
//			for (int i3 = 1;i3 <= month[*i2];i3++) {
//				temp.day = i3;
//				for (auto i4 = c[index].st[1].begin();i4 != c[index].st[1].end();i4++) {
//					temp.hours = *i4;
//					for (auto i5 = c[index].st[0].begin();i5 != c[index].st[0].end();i5++) {
//						temp.minutes = *i5;
//						int wek = (sub2(temp) + 3) % 7;
//						if (cmp(n1, temp) && cmp(temp, n2) && c[index].st[4].find(wek) != c[index].st[4].end()) {
//							ans_list.push_back(record(temp, c[index].s));
//						}
//					}
//				}
//			}
//		}
//	}
//}
//int main() {
//	int n;
//	string s, t, temp;
//	for (int i = 0;i < 32;i++) {
//		mp[da1[i]] = da2[i];
//	}
//	cin >> n >> s >> t;
//	node n1(s);
//	node n2(t);
//	getline(cin, temp);
//	for (int i = 0;i < n;i++) {
//		getline(cin, temp);
//		fuc1(temp);
//	}
//	for (int i = 0;i < c.size();i++) {
//		fuc2(n1, n2, i);
//	}
//	sort(ans_list.begin(), ans_list.end(), cmp2);
//	for (int i = 0;i < ans_list.size();i++) {
//		node n1 = ans_list[i].x;
//		printf("%04d%02d%02d%02d%02d %s\n", n1.year, n1.month, n1.day, n1.hours, n1.minutes, ans_list[i].s.c_str());
//	}
//	return 0;
//}