////我这个架构当初有个致命的问题，就是假如一号桌子用了，8：10用完，那么理论上下一个人会直接用壹号桌子，我这个就不会了。
//#include<iostream>
//#include <string>
//#include<queue>
//#include<math.h>
//#include<vector>
//#include <algorithm>
//using namespace std;
//struct record {
//	int a_time;
//	int s_time;
//	int f_time = 0;
//	int w_time = 0;
//	int mode;
//	int lock = 0;
//	record(int a, int b, int c) :a_time(a), s_time(b), mode(c) {}
//};
//struct event {
//	int p_time;
//	int pos;
//	int mode;
//	event(int a, int b,int c) : p_time(a), pos(b),mode(c) {}
//	friend bool operator < (const event& e1, const event& e2) {
//		if (e1.p_time != e2.p_time) {
//			return e1.p_time > e2.p_time;
//		}
//		else {
//			return e1.pos < e2.pos;
//		}
//	}
//};
//struct desk {
//	int next_time;
//	int total = 0;
//	int mode = 0;
//	desk(int b) :next_time(b) {}
//};
//vector<record> v;
//vector <desk> v2;
//priority_queue <event> q;
//int n, k, m;
//bool cmp(record r1, record r2) {
//	return r1.a_time < r2.a_time;
//}
//bool cmp2(record r1, record r2) {
//	if(r1.f_time!=r2.f_time)
//	    return r1.f_time < r2.f_time;
//	else {
//		return r1.w_time < r2.w_time;
//	}
//}
//int compute(string s) {
//	return stoi(s.substr(0, 2)) * 3600 + stoi(s.substr(3, 2)) * 60 + stoi(s.substr(6, 2));
//}
//void back(int temp) {
//	int hour = temp / 3600;
//	temp = temp % 3600;
//	int minute = temp / 60;
//	temp = temp % 60;
//	int second = temp;
//	printf("%.2d:%.2d:%.2d", hour, minute, second);
//}
//void fuc() {
//	while (true) {
//		if (q.empty())
//			return;
//		event temp = q.top();
//		q.pop();
//		if (temp.p_time >= 21 * 3600)
//			return;
//		bool flag = false;
//		if (temp.mode == 1) {
//			for (int i = 0;i < v.size();i++) {
//				if (v[i].lock == 0 && v[i].a_time <= temp.p_time && v[i].mode == 1) {
//					q.push(event(temp.p_time + v[i].s_time, temp.pos, 1));
//					v2[temp.pos - 1].total++;
//					v[i].lock = 1;
//					v[i].f_time = temp.p_time;
//					v[i].w_time = v[i].f_time - v[i].a_time;
//					flag = true;
//					break;
//				}
//			}
//		}
//		if (flag == false) {
//			for (int i = 0;i < v.size();i++) {
//				if (v[i].lock == 0) {
//					q.push(event(max(temp.p_time, v[i].a_time) + v[i].s_time, temp.pos, temp.mode));
//					v2[temp.pos - 1].total++;
//					v[i].lock = 1;
//					v[i].f_time = max(temp.p_time, v[i].a_time);
//					v[i].w_time = v[i].f_time - v[i].a_time;
//					flag = true;
//					break;
//				}
//			}
//		}
//		if (flag == false) {
//			break;
//		}
//	}
//
//}
//int main() {
//	cin >> n;
//	for (int i = 0;i < n;i++) {
//		string s;
//		int a, b;
//		cin >> s >> a >> b;
//		int temp = compute(s);
//		if(temp<= 21 * 3600)
//			v.push_back(record(temp, min(a * 60,7200), b));
//	}
//	sort(v.begin(), v.end(), cmp);
//	cin >> k >> m;
//	for (int i = 0;i < k;i++) {
//		v2.push_back(desk(8 * 3600));
//	}
//	for (int i = 0;i < m;i++) {
//		int temp;
//		cin >> temp;
//		v2[temp - 1].mode = 1;
//	}
//	for (int i = 0;i < k;i++) {
//		q.push(event(8 * 3600, i + 1, v2[i].mode));
//	}
//	fuc();
//	sort(v.begin(), v.end(), cmp2);
//	for (int i = 0;i < v.size();i++) {
//		if (v[i].lock == 1) {
//			back(v[i].a_time);
//			cout << " ";
//			back(v[i].f_time);
//			cout << " ";
//			cout << round(v[i].w_time*1.0 / 60) << endl;
//		}
//	}
//	for (int i = 0;i < k;i++) {
//		cout << v2[i].total;
//		if (i != k - 1) {
//			cout << " ";
//		}
//	}
//	return 0;
//}