//#include<iostream>
//#include<math.h>
//#include<stack>
//#include <vector>
//#include<algorithm>
//using namespace std;
//const int sqr = 316;
//int n;
//stack<int> sk;
//int hashtable[100005];
//int block[sqr + 1];
//void getmedium() {
//	int sum = 0;
//	for (int i = 0;i <= sqr;i++) {
//		sum += block[i];
//		if (sum > (sk.size() - 1) / 2) {
//			sum -= block[i];
//			int index = i * sqr;
//			for (int j = 0;j < sqr;j++) {
//				sum += hashtable[index++];
//				if (sum > (sk.size() - 1) / 2) {
//					cout << index - 1 << endl;
//					return;
//				}
//			}
//		}
//	}
//	return;
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
//				hashtable[temp]--;
//				block[temp / 316]--;
//			}
//		}
//		else if (temp == "Push") {
//			int value;
//			cin >> value;
//			sk.push(value);
//			hashtable[value]++;
//			block[value / 316]++;
//		}
//		else {
//			if (sk.empty()) {
//				cout << "Invalid" << endl;
//				continue;
//			}
//			getmedium();
//		}
//	}
//	return 0;
//}