//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {
//	int no;
//	double dis;
//	node(int a, double b) :no(a), dis(b) {}
//};
//bool cmp(node n1, node n2) {
//	if (n1.dis != n2.dis)
//		return n1.dis < n2.dis;
//	else
//		return n1.no < n2.no;
//}
//int main() {
//	int n;
//	double x0, y0;
//	vector<node> ans;
//	cin >> n >> x0 >> y0;
//	for (int i = 1;i <= n;i++) {
//		double x1, y1;
//		cin >> x1 >> y1;
//		double temp = (x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0);
//		ans.push_back(node(i, temp));
//	}
//	sort(ans.begin(), ans.end(), cmp);
//	for (int i = 0;i < 3;i++) {
//		cout << ans[i].no << endl;
//	}
//	return 0;
//}