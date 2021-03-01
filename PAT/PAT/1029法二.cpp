////这个是只遍历一半，但还是vector
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	int sum1, sum2;
//	vector<long> v1;
//	vector<long> v2;
//	vector<long> v;
//	cin >> sum1;
//	for (int i = 0;i < sum1;i++) {
//		long temp;
//		cin >> temp;
//		v1.push_back(temp);
//	}
//	v1.push_back(1000000000);
//	cin >> sum2;
//	for (int i = 0;i < sum2;i++) {
//		long temp;
//		cin >> temp;
//		v2.push_back(temp);
//	}
//	v2.push_back(1000000000);
//	int i = 0, j = 0;
//	for (int k = 0;k <= (sum1 + sum2 - 1) / 2;k++) {
//		if (v1[i] <= v2[j]) {
//			v.push_back(v1[i]);
//			i++;
//		}
//		else if (v1[i] > v2[j]) {
//			v.push_back(v2[j]);
//			j++;
//		}
//	}
//	cout << v[(sum1 + sum2 - 1) / 2];
//	return 0;
//}