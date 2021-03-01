//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int a[105];
//int b[105];
//int result[105];
//bool judgepart(int x, int y) {
//	for (int i = x;i < y;i++) {
//		if (b[i] > b[i + 1]) {
//			return false;
//		}
//	}
//	return true;
//}
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0;i < n;i++) {
//		cin >> a[i];
//	}
//	for (int i = 0;i < n;i++) {
//		cin >> b[i];
//	}
//	int mark = -1;
//	for (int i = 1;i < n;i++) {
//		if (!judgepart(0, i)) {
//			mark = i;
//			break;
//		}
//	}
//	vector<int> v;
//	for (int i = 0;i < n;i++) {
//		v.push_back(a[i]);
//	}
//	sort(v.begin(), v.begin() + mark + 1);
//	cout << "Insertion Sort" << endl;
//	for (int i = 0;i < n;i++) {
//		cout << v[i];
//		if (i != n - 1)
//			cout << " ";
//	}
//	return 0;
//}