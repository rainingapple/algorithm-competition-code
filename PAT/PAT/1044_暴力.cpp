//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	int n, cost;
//	cin >> n >> cost;
//	vector<int> v(n + 1);
//	vector<int> head;
//	vector<int> tail;
//	for (int i = 1;i <= n;i++) {
//		cin >> v[i];
//	}
//	for (int k = cost;;k++) {
//		bool flag = false;
//		for (int i = 1;i <= n;i++) {
//			int value = 0;
//			for (int j = i;j <= n;j++) {
//				value += v[j];
//				if (value == k)
//				{
//					head.push_back(i);
//					tail.push_back(j);
//					i = j + 1;
//					flag = true;
//				}
//				else if (value > k) {
//					break;
//				}
//			}
//		}
//		if (flag)
//			break;
//	}
//	for (int i = 0;i < head.size();i++) {
//		cout << head[i] << "-" << tail[i] << endl;
//	}
//	return 0;
//}