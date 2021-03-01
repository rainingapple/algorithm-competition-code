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
	int sum = (t2.day - t1.day) * 3600 + (t2.hour - t1.hour) * 60 + t2.minute - t1.minute;
	return sum;
}
bool cmp(time_record t1, time_record t2) {
	if (t1.month > t2.month)
		return 1;
	else if (t1.month < t2.month)
		return -1;
	else
	{
		if (t1.day > t2.day)
			return 1;
		else if (t1.day < t2.day)
			return -1;
		else
		{
			if (t1.hour > t2.hour)
				return 1;
			else if (t1.hour < t2.hour)
				return -1;
			else
			{
				if (t1.minute > t2.minute)
					return 1;
				else if (t1.minute < t2.minute)
					return -1;
				else
					return 0;
			}
		}
	}
}
bool cmp2(record r1,record r2) {
	int flag = cmp(r1.time, r2.time);
	if (flag == -1) {
		return true;
	}
	else {
		return false;
	}
}
map<string, vector<record>> user_record;
map<string, vector<fin_record>> fin_user_record;
void change() {
	for (auto i = user_record.begin();i != user_record.end();i++) {
		sort(i->second.begin(), i->second.end(),cmp2);
		for (int j = 0;j < i->second.size();j++) {
			int temp = 3600*33;
			int mark = -1;
			if (i->second[j].mode == 0) {
				for (int k = 0;k < i->second.size();k++) {
					if (i->second[k].time.flag == false && i->second[k].mode == 1 && cmp(i->second[k].time, i->second[j].time)==1 && sub(i->second[j].time, i->second[k].time) < temp) {
						mark = k;
						temp = sub(i->second[j].time, i->second[k].time);
					}
			}
			}
			if (mark != -1) {
				i->second[mark].time.flag = true;
				fin_user_record[i->first].push_back(fin_record(j, mark));
			}
		}
	}
}
double show_cost(record r1,record r2) {
	int time_sum = sub(r1.time, r2.time);
	double cost = 0;
	cout << time_sum << " $" << 12.01 << endl;
	return cost;
}
void out() {
	for (auto i = fin_user_record.begin();i != fin_user_record.end();i++) {
		cout << i->first;
		printf(" %.2d\n", user_record[i->first][i->second[0].b_time].time.month);
		for (int j = 0;j < i->second.size();j++) {
			record r1 = user_record[i->first][i->second[j].b_time];
			record r2 = user_record[i->first][i->second[j].e_time];
			printf("%.2d:%.2d:%.2d ", r1.time.day, r1.time.hour, r1.time.minute);
			printf("%.2d:%.2d:%.2d ", r2.time.day, r2.time.hour, r2.time.minute);
			show_cost(r1, r2);
			printf("Total amount : $%f\n", 12.1);
		}
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
		getline(cin,temp);
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