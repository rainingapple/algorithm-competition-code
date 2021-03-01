//这题来看，没啥进步，但是不能只把希望寄托于取消同步限制
//#pragma warning(disable:4996)
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<string.h>
//using namespace std;
//char stu[40005][5];
//bool cmp(const int& s1, const int& s2) {
//	return strcmp(stu[s1],stu[s2])<0;
//}
//int main() {
//	int n, k;
//	scanf("%d%d", &n, &k);
//	vector<vector<int>> m(k + 1);
//	for (int i = 1;i <= n;i++) {
//		int total;
//		scanf("%s%d", &stu[i],&total);
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
//			printf("%s\n", stu[m[i][j]]);
//		}
//	}
//	return 0;
//}