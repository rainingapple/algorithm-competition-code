//#include<iostream>
//#include<vector>
//#include<set>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	vector<set<int>> v(n);
//	for (int i = 0;i < n;i++) {
//		int total;
//		cin >> total;
//		for (int j = 0;j < total;j++) {
//			int temp;
//			cin >> temp;
//			v[i].insert(temp);
//		}
//	}
//	int qnum;
//	cin >> qnum;
//	for (int i = 0;i < qnum;i++) {
//		int a, b;
//		int num1 = 0;
//		int bias = 0;
//		cin >> a >> b;
//		for (auto it1 = v[a - 1].begin();it1 != v[a - 1].end();it1++) {
//			if (v[b - 1].count(*it1)) {
//				num1++;
//				bias++;
//			}
//		}
//		int num2 = v[a - 1].size() + v[b - 1].size() - bias;
//		printf("%.1f", ((1.0 * num1) / (1.0 * num2))*100);
//		cout << "%\n";
//	}
//	return 0;
//}