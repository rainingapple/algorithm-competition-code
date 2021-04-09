//#include<iostream>
//#include<algorithm>
//#include<vector>
//#pragma warning(disable:4996)
//using namespace std;
//int N, M, K;
//int ge, gi;
//int school_quota[105];
//vector<int> school_admitted[105];
//struct person {
//	int id;
//	int sum;
//	int ge;
//	int gi;
//	int perfer[6];
//};
//bool flag[105];
//person pre[105];
//person plist[40005];
//bool cmp(person p1, person p2) {
//	if (p1.sum > p2.sum) {
//		return true;
//	}
//	else if (p1.sum < p2.sum) {
//		return false;
//	}
//	else {
//		return p1.ge > p2.ge;
//	}
//}
//int main() {
//	scanf("%d%d%d", &N, &M, &K);
//	for (int i = 0;i < M;i++) {
//		scanf("%d", &school_quota[i]);
//	}
//	for (int i = 0;i < N;i++) {
//		plist[i].id = i;
//	}
//	for (int i = 0;i < N;i++) {
//		scanf("%d%d", &plist[i].ge, &plist[i].gi);
//		plist[i].sum = plist[i].ge + plist[i].gi;
//		for (int j = 0;j < K;j++) {
//			scanf("%d", &plist[i].perfer[j]);
//		}
//	}
//	sort(plist, plist + N, cmp);
//	for (int i = 0;i < N;i++) {
//		person tp = plist[i];
//		for (int j = 0;j < K;j++) {
//			if (flag[tp.perfer[j]] == true) {
//				if (tp.ge == pre[tp.perfer[j]].ge && tp.gi == pre[tp.perfer[j]].gi) {
//					school_admitted[tp.perfer[j]].push_back(tp.id);
//					break;
//				}
//				else {
//					flag[tp.perfer[j]] = false;
//				}
//			}
//			if (school_quota[tp.perfer[j]] > 0) {
//				school_quota[tp.perfer[j]]--;
//				school_admitted[tp.perfer[j]].push_back(tp.id);
//				if (school_quota[tp.perfer[j]] == 0) {
//					flag[tp.perfer[j]] = true;
//					pre[tp.perfer[j]] = tp;
//				}
//				break;
//			}
//		}
//	}
//	for (int i = 0;i < M;i++) {
//		sort(school_admitted[i].begin(), school_admitted[i].end());
//		for (int j = 0;j < school_admitted[i].size();j++) {
//			j != school_admitted[i].size() - 1 ? printf("%d ", school_admitted[i][j]) : printf("%d", school_admitted[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}