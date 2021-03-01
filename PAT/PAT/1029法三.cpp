////在法二的基础上，不再保存中位数之前的值，而仅仅保留中位数是谁，从时间表现上，这是所有算法中最优的
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	int sum1, sum2;
//	vector<long> v1;
//	vector<long> v2;
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
//	int flag = -1;
//	for (int k = 0;k <= (sum1 + sum2 - 1) / 2;k++) {
//		if (v1[i] <= v2[j]) {
//			i++;
//			flag = 1;
//		}
//		else if (v1[i] > v2[j]) {
//			flag = 2;
//			j++;
//		}
//	}
//	if (flag == 1) {
//		cout << v1[i - 1];
//	}
//	else {
//		cout << v2[j - 1];
//	}
//	return 0;
//}