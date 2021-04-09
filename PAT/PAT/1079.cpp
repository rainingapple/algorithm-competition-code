////ºÚµ•µƒÕÿ∆À≈≈–Ú
//#include<iostream>
//#include<vector>
//#include<queue>
//#pragma warning(disable:4996)
//using namespace std;
//int N;
//double P, r;
//double total_sale = 0;
//vector<int> supp[100005];
//int indegreee[100005];
//int tail_num[100005];
//int s_total, temp;
//queue<pair<int, double>> q;
//int main() {
//	scanf("%d%lf%lf", &N, &P, &r);
//	for (int i = 0;i < N;i++) {
//		scanf("%d", &s_total);
//		if (s_total == 0) {
//			scanf("%d", &tail_num[i]);
//		}
//		for (int j = 0;j < s_total;j++) {
//			scanf("%d", &temp);
//			indegreee[temp]++;
//			supp[i].push_back(temp);
//		}
//	}
//	for (int i = 0;i < N;i++) {
//		if (indegreee[i] == 0) {
//			q.push(make_pair(i, P));
//		}
//	}
//	while (!q.empty()) {
//		int id = q.front().first;
//		double sale = q.front().second;
//		q.pop();
//		if (supp[id].empty()) {
//			total_sale += tail_num[id] * sale;
//		}
//		else {
//			for (int i = 0;i < supp[id].size();i++) {
//				q.push(make_pair(supp[id][i], sale * (1 + r * 0.01)));
//			}
//		}
//	}
//	printf("%.1lf", total_sale);
//	return 0;
//}