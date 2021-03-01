/*#include<iostream>
#include<algorithm>
#include<sstream>
#include <string>
#include<map>
#include <vector>
using namespace std;
int cost[24];
struct time_record {
	int month;
	int day;
	int hour;
	int minute;
	bool flag = false;
	time_record(string s) {
		month = stoi(s.substr(0, 2));
		day = stoi(s.substr(3, 2));
		hour = stoi(s.substr(6, 2));
		minute = stoi(s.substr(9, 2));
	}
};
struct record {
	time_record time;
	int mode;//0ÊÇon£¬1ÊÇoff;
	record(string t, int m) : time(t), mode(m) {}
};
struct fin_record {
	int b_time;
	int e_time;
	fin_record(int b, int e) :b_time(b), e_time(e) {}
};
int sub(time_record t1, time_record t2) {
	int temp1 = ((t1.month * 32 + t1.day) * 24 + t1.hour) * 60 + t1.minute;
	int temp2 = ((t2.month * 32 + t2.day) * 24 + t2.hour) * 60 + t2.minute;
	return temp2-temp1;
}
bool cmp2(record r1, record r2) {
	time_record t1 = r1.time;
	time_record t2 = r2.time;
	int temp1 = ((t1.month * 32 + t1.day) * 24 + t1.hour) * 60 + t1.minute;
	int temp2 = ((t2.month * 32 + t2.day) * 24 + t2.hour) * 60 + t2.minute;
	return temp1 < temp2;
}
map<string, vector<record>> user_record;
map<string, vector<fin_record>> fin_user_record;
void change() {
	for (auto i = user_record.begin();i != user_record.end();i++) {
		sort(i->second.begin(), i->second.end(), cmp2);
		for (int j = 0;j < i->second.size()-1;j++) {
			if (i->second[j].mode==0 && i->second[j+1].mode==1) {
				fin_user_record[i->first].push_back(fin_record(j, j+1));
			}
		}
	}
}
int sb(record r1) {
	int day = r1.time.day;
	int hour = r1.time.hour;
	int minute = r1.time.minute;
	int temp = 0;
	for (int i = 0;i < 24;i++) {
		temp += cost[i] * 60;
	}
	int ans = 0;
	for (int i = 0;i < hour;i++) {
		ans += cost[i] * 60;
	}
	ans = ans + temp * day + minute * cost[hour];
	return ans;
}
double compute(record r1,record r2) {
	return (sb(r2) - sb(r1)) * 1.0 / 100;
}
double show_cost(record r1, record r2) {
	int time_sum = sub(r1.time, r2.time);
	double cost = compute(r1, r2);
	printf("%d $%.2f\n", time_sum, cost);
	return cost;
}
void out() {
	for (auto i = fin_user_record.begin();i != fin_user_record.end();i++) {
		cout << i->first;
		printf(" %.2d\n", user_record[i->first][i->second[0].b_time].time.month);
		double total = 0;
		for (int j = 0;j < i->second.size();j++) {
			record r1 = user_record[i->first][i->second[j].b_time];
			record r2 = user_record[i->first][i->second[j].e_time];
			printf("%.2d:%.2d:%.2d ", r1.time.day, r1.time.hour, r1.time.minute);
			printf("%.2d:%.2d:%.2d ", r2.time.day, r2.time.hour, r2.time.minute);
			total += show_cost(r1, r2);
		}
		printf("Total amount: $%.2f\n", total);
	}
}
int main() {
	for (int i = 0;i < 24;i++) {
		cin >> cost[i];
	}
	int n;
	cin >> n;
	string pis;
	getline(cin, pis);
	for (int i = 0;i < n;i++) {
		string temp, s1, s2, s3;
		getline(cin, temp);
		stringstream ss(temp);
		ss >> s1 >> s2 >> s3;
		if (s3 == "on-line") {
			user_record[s1].push_back(record(s2, 0));
		}
		else {
			user_record[s1].push_back(record(s2, 1));
		}
	}
	change();
	out();
	return 0;
}*/