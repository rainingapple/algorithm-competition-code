//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<map>
//using namespace std;
//string stu[40005];
//bool cmp(const int& s1, const int& s2) {
//	return stu[s1] < stu[s2];
//}
//int main() {
//	int n, k;
//	scanf("%d%d", &n, &k);
//	vector<vector<int>> m(k+1);
//	for (int i = 1;i <= n;i++) {
//		cin >> stu[i];
//		int total;
//		cin >> total;
//		for (int j = 0;j < total;j++) {
//			int temp;
//			scanf("%d", &temp);
//			m[temp].push_back(i);
//		}
//	}
//	for (int i = 1;i <= k;i++) {
//		printf("%d %d\n", i, m[i].size());
//		sort(m[i].begin(), m[i].end(), cmp);
//		for (int j = 0;j < m[i].size();j++) {
//			printf("%s\n", stu[m[i][j]].c_str());
//		}
//	}
//	return 0;
//}