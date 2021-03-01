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
//	int now_s = 0;
//	double cost = 0;
//	double max_d = c * per;
//	double oil = 0;
//	while (true) {
//		int next_s = -1;
//		double now_min_price = 1000000000;
//		if (now_s == n) {
//			break;
//		}
//		for (int i = now_s + 1;i <= n;i++) {
//			if (v[i].dis <= v[now_s].dis + max_d) {
//				if (v[i].price < now_min_price) {
//					now_min_price = v[i].price;
//					next_s = i;
//					if (v[i].price < v[now_s].price) {
//						break;
//					}
//				}
//			}
//		}
//		if (next_s == -1) {
//			printf("The maximum travel distance = %.2f", v[now_s].dis + max_d);
//			return;
//		}
//		if (now_min_price < v[now_s].price) {
//			if (oil < (v[next_s].dis - v[now_s].dis) / per) {
//				cost += v[now_s].price * ((v[next_s].dis - v[now_s].dis) / per - oil);
//				oil = 0;
//			}
//			else {
//				oil -= (v[next_s].dis - v[now_s].dis) / per;
//			}
//		}
//		else {
//			cost += (c - oil) * v[now_s].price;
//			oil = c- (v[next_s].dis - v[now_s].dis) / per;
//		}
//		now_s = next_s;
//	}
//	printf("%.2f", cost);
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
//		cout << "The maximum travel distance = 0.00" << endl;
//		return 0;
//	}
//	fuc1();
//	return 0;
//}