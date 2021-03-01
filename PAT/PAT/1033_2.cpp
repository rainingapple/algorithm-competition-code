//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int n;
//double c, d, per;
//struct station {
//	double dis;
//	double price;
//	station(double a, double b) :dis(a), price(b) {}
//};
//vector<station> v;
//bool cmp(station s1, station s2) {
//	return s1.dis < s2.dis;
//}
//void fuc1() {
//	double oil = 0;
//	int now_s = 0;
//	int next_s;
//	double cost = 0;
//	double max_d = c * per;
//	while (true) {
//		bool flag = false;
//		if (now_s == n) {
//			break;
//		}
//		for (int i = now_s + 1;i <= n;i++) {
//			if (v[i].dis < v[now_s].dis + max_d && v[i].price < v[now_s].price) {
//				flag = true;
//				if (oil < (v[i].dis - v[now_s].dis) / per) {
//					cost += v[now_s].price * ((v[i].dis - v[now_s].dis) / per - oil);
//				}
//				else {
//					oil -= (v[i].dis - v[now_s].dis) / per;
//				}
//				now_s = i;
//				oil = 0;
//				break;
//			}
//		}
//		if (flag == false) {
//			double now_min_price = 1000000000;
//			for (int i = now_s + 1;i <= n;i++) {
//				if (v[i].dis < v[now_s].dis + max_d && v[i].price < now_min_price) {
//					flag = true;
//					now_min_price = v[i].price;
//					next_s = i;
//				}
//			}
//			if (flag == true) {
//				if (oil < (v[next_s].dis - v[now_s].dis) / per) {
//					cost += v[now_s].price * ((v[next_s].dis - v[now_s].dis) / per - oil);
//				}
//				else {
//					oil -= (v[next_s].dis - v[now_s].dis) / per;
//				}
//				now_s = next_s;
//			}
//			else {
//				cout << "The maximum travel distance = " << v[now_s].dis + max_d;
//				cout << endl << cost;
//				return;
//			}
//		}
//	}
//	cout << cost;
//}
//int main() {
//	cin >> c >> d >> per >> n;
//	for (int i = 0;i < n;i++) {
//		double dis;
//		double price;
//		cin >> price >> dis;
//		v.push_back(station(dis, price));
//	}
//	v.push_back(station(d, 0));
//	sort(v.begin(), v.end(), cmp);
//	if (v[0].dis != 0)
//	{
//		cout << "The maximum travel distance = 0" << endl;
//		return 0;
//	}
//	fuc1();
//	return 0;
//}