//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct record {
//	string name;
//	char gender;
//	string id;
//	int grade;
//	record(string a, char b, string c, int d) :name(a), gender(b), id(c), grade(d) {}
//};
//vector<record> mv;
//vector<record> fmv;
//bool cmp(record r1, record r2) {
//	return r1.grade < r2.grade;
//}
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0;i < n;i++) {
//		string a, c;
//		char b;
//		int d;
//		cin >> a >> b >> c >> d;
//		if (b == 'M') {
//			mv.push_back(record(a, b, c, d));
//		}
//		else {
//			fmv.push_back(record(a, b, c, d));
//		}
//	}
//	sort(mv.begin(), mv.end(), cmp);
//	sort(fmv.begin(), fmv.end(), cmp);
//	int a1, a2;
//	if (!fmv.empty()) {
//		record ans2 = fmv[fmv.size() - 1];
//		a1 = ans2.grade;
//		cout << ans2.name << " " << ans2.id << endl;
//	}
//	else {
//		cout << "Absent" << endl;
//	}
//	if (!mv.empty()) {
//		record ans1 = mv[0];
//		a2 = ans1.grade;
//		cout << ans1.name << " " << ans1.id << endl;
//	}
//	else {
//		cout << "Absent" << endl;
//	}
//	if (!mv.empty() && !fmv.empty()) {
//		cout << a1 - a2;
//	}
//	else {
//		cout << "NA";
//	}
//	return 0;
//}