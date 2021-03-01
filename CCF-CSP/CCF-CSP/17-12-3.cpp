////这个实在是太慢了
////我是把好几年的每一分钟都做了一次判定，我觉得至少也是分钟级的。。。。。
//#include<iostream>
//#include<string>
//#include<set>
//#include<vector>
//#include<sstream>
//#include<regex>
//#include<map>
//using namespace std;
//string da1[32] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec","Sun","Mon","Tue","Wed","Thu","Fri","Sat","0","1","2","3","4","5","6","7","8","9","10","11","12"};
//int da2[32] = { 1,2,3,4,5,6,7,8,9,10,11,12,0,1,2,3,4,5,6,0,1,2,3,4,5,6,7,8,9,10,11,12};
//int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
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
//vector<command> c;
//map<string, int> mp;
//void fuc1(string s) {
//	stringstream ss(s);
//	command t_command;
//	for (int i = 0;i < 5;i++) {
//		ss >> s;
//		if (s[0]=='*') {
//			for (int j = 0;j <= 60;j++) {
//				t_command.st[i].insert(j);
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
//bool judge(node x,int index,int wek) {
//	command temp = c[index];
//	if (temp.st[0].find(x.minutes)!=temp.st[0].end()) {
//		if (temp.st[1].find(x.hours) != temp.st[1].end()) {
//			if (temp.st[2].find(month[x.month]) != temp.st[2].end()) {
//				if (temp.st[3].find(x.month) != temp.st[3].end()) {
//					if (temp.st[4].find(wek) != temp.st[4].end()) {
//						return true;
//					}
//				}
//			}
//		}
//	}
//	return false;
//}
//int sub(node x) {
//	int k = 0;
//	for (int i = 1970;i < x.year;i++) {
//		if (isrun(i))
//			k = k + 366*24*60;
//		else
//			k = k + 365*24*60;
//	}
//	if (isrun(x.year))
//		month[2] = 29;
//	for (int i = 1;i < x.month;i++) {
//		k += month[i]*24*60;
//	}
//	for (int i = 1;i < x.day;i++) {
//		k += 24 * 60;
//	}
//	for (int i = 0;i < x.hours;i++) {
//		k += 60;
//	}
//	k += x.minutes;
//	month[2] = 28;
//	return k;
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
//void fuc2(node n1,node n2) {
//	int total = sub(n2) - sub(n1) + 1;
//	while (total--) {
//		int wek = (sub2(n1) + 3) % 7;
//		for (int i = 0;i < c.size();i++) {
//			if (judge(n1, i, wek)) {
//				printf("%04d%02d%02d%02d%02d %s\n", n1.year, n1.month, n1.day, n1.hours, n1.minutes,c[i].s.c_str());
//			}
//		}
//		n1.minutes++;
//		if (n1.minutes == 60) {
//			n1.minutes = 0;
//			n1.hours++;
//			if (n1.hours == 24) {
//				n1.hours = 0;
//				n1.day++;
//				if (isrun(n1.year) && n1.month == 2) {
//					month[2] = 29;
//				}
//				if (n1.day == month[n1.month] + 1) {
//					n1.day = 1;
//					n1.month++;
//					if (n1.month == 13) {
//						n1.month = 1;
//						n1.year++;
//					}
//				}
//				month[2] = 28;
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
//	fuc2(n1,n2);
//	//检验完毕
//	/*for (int i = 0;i < c.size();i++) {
//		cout << i << endl;
//		for (int j = 0;j < 5;j++) {
//			cout << j << " ";
//			for (auto k = c[i].st[j].begin();k != c[i].st[j].end();k++) {
//				cout << *k << " ";
//			}
//			cout << endl;
//		}
//		cout << c[i].s << endl;
//	}*/
//	return 0;
//}