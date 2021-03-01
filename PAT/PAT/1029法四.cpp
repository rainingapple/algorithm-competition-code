////这是那种只读一半的那种，可以学习一下，但是考试还是很容易错。
////注意最后那里j的初始化是1
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	int sum1, sum2;
//	vector<long> v1;
//	cin >> sum1;
//	for (int i = 0;i < sum1;i++) {
//		long temp;
//		cin >> temp;
//		v1.push_back(temp);
//	}
//	v1.push_back(1000000000);
//	cin >> sum2;
//	int temp, result;
//	cin >> temp;
//	int i = 0, j = 1;
//	for (int k = 0;k <= (sum1 + sum2 - 1) / 2;k++) {
//		if (v1[i] <= temp) {
//			result = v1[i++];
//		}
//		else {
//			result = temp;
//			if (j++ < sum2) {
//				cin >> temp;
//			}
//			else {
//				temp = 1000000000;
//			}
//		}
//	}
//	cout << result;
//}