/*#include<iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;
struct customer {
	int in_time;
	int serve_time;
	int wait_time;
	customer(int a, int b, int c) :in_time(a), serve_time(b), wait_time(c) {}
};
struct window {
	int next_serve_time;
	window(int a) :next_serve_time(a) {}
};
vector<customer> c_list;
vector<window> w_list;
bool cmp(customer c1, customer c2) {
	return c1.in_time < c2.in_time;
}
int compute_time(string s) {
	int hour = stoi(s.substr(0, 2));
	int minute = stoi(s.substr(3, 2));
	int second = stoi(s.substr(6, 2));
	return (hour * 60 + minute) * 60 + second;
}
int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0;i < k;i++) {
		w_list.push_back(window(8 * 3600));
	}
	for (int i = 0;i < n;i++) {
		string s;
		int tt, temp;
		cin >> s >> tt;
		temp = compute_time(s);
		if (temp <= 17 * 3600) {
			c_list.push_back(customer(temp, tt * 60, 0));
		}
	}
	sort(c_list.begin(), c_list.end(), cmp);
	for (int i = 0;i < c_list.size();i++) {
		int temp = c_list[i].in_time;
		int min_time = 100*3600;
		int mark;
		for (int j = 0;j < k;j++) {
			if (w_list[j].next_serve_time < min_time) {
				mark = j;
				min_time = w_list[j].next_serve_time;
			}
		}
		c_list[i].wait_time = max(min_time,c_list[i].in_time) - c_list[i].in_time;
		w_list[mark].next_serve_time = max(min_time, c_list[i].in_time)+c_list[i].serve_time;
	}
	int ans = 0;
	for (int i = 0;i < c_list.size();i++) {
		ans += c_list[i].wait_time;
	}
	ans = ans / c_list.size();
	printf("%.1f", ans * 1.0 / 60);
}*/