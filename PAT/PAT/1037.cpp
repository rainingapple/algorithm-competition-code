//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//bool cmp1(int a,int b) {
//	return a > b;
//}
//bool cmp2(int a, int b) {
//	return a < b;
//}
//int main() {
//	vector<int> coin_p;
//	vector<int> coin_n;
//	vector<int> product_p;
//	vector<int> product_n;
//	int n1, n2;
//	cin >> n1;
//	for (int i = 0;i < n1;i++) {
//		int temp;
//		cin >> temp;
//		if (temp < 0) {
//			coin_n.push_back(temp);
//		}else if (temp > 0) {
//			coin_p.push_back(temp);
//		}
//	}
//	cin >> n2;
//	for (int i = 0;i < n2;i++) {
//		int temp;
//		cin >> temp;
//		if (temp < 0) {
//			product_n.push_back(temp);
//		}
//		else if (temp > 0) {
//			product_p.push_back(temp);
//		}
//	}
//	sort(coin_p.begin(), coin_p.end(), cmp1);
//	sort(coin_n.begin(), coin_n.end(), cmp2);
//	sort(product_p.begin(), product_p.end(), cmp1);
//	sort(product_n.begin(), product_n.end(), cmp2);
//	int ans = 0;
//	for (int i = 0, j = 0;i < coin_p.size() && j < product_p.size();i++, j++) {
//		ans += coin_p[i] * product_p[j];
//	}
//	for (int i = 0, j = 0;i < coin_n.size() && j < product_n.size();i++, j++) {
//		ans += coin_n[i] * product_n[j];
//	}
//	cout << ans;
//	return 0;
//}