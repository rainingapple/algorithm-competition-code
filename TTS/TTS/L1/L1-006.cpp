//#include<iostream>
//#include<vector>
//#include<math.h>
//#pragma warning(disable:4996)
//using namespace std;
//vector<int> t_ans, ans;
//bool isprime(int x) {
//	if (x == 1) return false;
//	for (int i = 2;i <= sqrt(x);i++) {
//		if (x % i == 0)
//			return false;
//	}
//	return true;
//}
//int main() {
//	int N;
//	scanf("%d", &N);
//	if (isprime(N)) {
//		printf("%d\n%d", 1, N);
//		return 0;
//	}
//	for (int i = 2;i <= sqrt(N);i++) {
//		int right = N, j = i;
//		while (right % j == 0) {
//			t_ans.push_back(j);
//			right /= j;
//			j++;
//		}
//		if (t_ans.size() > ans.size()) {
//			ans = t_ans;
//		}
//		t_ans.clear();
//	}
//	printf("%d\n", ans.size());
//	for (int i = 0;i < ans.size();i++) {
//		i != ans.size() - 1 ? printf("%d*", ans[i]) : printf("%d", ans[i]);
//	}
//	return 0;
//}