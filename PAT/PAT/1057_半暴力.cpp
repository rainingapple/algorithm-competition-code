//#include<iostream>
//#include<string>
//#include<stack>
//#include <vector>
//#include<algorithm>
//using namespace std;
//int n;
//stack<int> sk;
//vector<int> v;
//int search(int x) {
//	int lef = 0, right = v.size() - 1;
//	while (lef <= right) {
//		int medium = (lef + right) / 2;
//		if (v[medium] == x) {
//			return medium;
//		}
//		else if (v[medium] > x) {
//			right = medium - 1;
//		}
//		else {
//			lef = medium + 1;
//		}
//	}
//	return -1;
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> n;
//	for (int i = 0;i < n;i++) {
//		string temp;
//		cin >> temp;
//		if (temp == "Pop") {
//			if (sk.empty()) {
//				cout << "Invalid" << endl;
//				continue;
//			}
//			else {
//				int temp = sk.top();
//				cout << temp << endl;
//				sk.pop();
//				int index = search(temp);
//				v.erase(v.begin() + index);
//			}
//		}
//		else if (temp == "Push") {
//			int value;
//			cin >> value;
//			sk.push(value);
//			v.push_back(value);
//			sort(v.begin(), v.end());
//		}
//		else {
//			if (sk.empty()) {
//				cout << "Invalid" << endl;
//				continue;
//			}
//			cout << v[(v.size() - 1) / 2] << endl;
//		}
//	}
//	return 0;
//}