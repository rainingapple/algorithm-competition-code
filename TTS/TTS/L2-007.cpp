//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<queue>
//#pragma warning(disable:4996)
//using namespace std;
//struct home {
//	int min_id = 100000;
//	int mem_totol = 0;
//	double horse_total = 0;
//	double sqr = 0;
//};
//int n, id, mother, father, k;
//bool reat[10005][10005], vis[10005];
//double horse_total[10005], sqr[10005];
//vector<int> v;
//vector<home> home_list;
//bool cmp(home h1, home h2) {
//	if (h1.sqr != h2.sqr)
//		return h1.sqr > h2.sqr;
//	else {
//		return h1.min_id < h2.min_id;
//	}
//}
//void BFS(int x) {
//	home temp_home;
//	queue<int> q;
//	q.push(x);
//	vis[x] = true;
//	while (!q.empty()) {
//		int top = q.front();
//		q.pop();
//		temp_home.mem_totol++;
//		temp_home.min_id = min(temp_home.min_id, top);
//		temp_home.horse_total += horse_total[top];
//		temp_home.sqr += sqr[top];
//		for (int i = 0;i < 10000;i++) {
//			if (!vis[i] && reat[top][i]) {
//				vis[i] = true;
//				q.push(i);
//			}
//		}
//	}
//	temp_home.horse_total /= temp_home.mem_totol;
//	temp_home.sqr /= temp_home.mem_totol;
//	home_list.push_back(temp_home);
//}
//void solution() {
//	for (int i = 0;i < v.size();i++) {
//		if (!vis[v[i]])
//			BFS(v[i]);
//	}
//}
//int main() {
//	scanf("%d", &n);
//	while (n--) {
//		scanf("%d%d%d%d", &id, &mother, &father, &k);
//		v.push_back(id);
//		if (mother != -1)
//			reat[id][mother] = reat[mother][id] = true;
//		if (father != -1)
//			reat[id][father] = reat[father][id] = true;
//		for (int i = 0;i < k;i++) {
//			int temp;
//			scanf("%d", &temp);
//			reat[id][temp] = reat[temp][id] = true;
//		}
//		scanf("%lf%lf", &horse_total[id], &sqr[id]);
//	}
//	solution();
//	printf("%d\n", home_list.size());
//	sort(home_list.begin(), home_list.end(), cmp);
//	for (int i = 0;i < home_list.size();i++) {
//		printf("%04d %d %.3lf %.3lf\n", home_list[i].min_id, home_list[i].mem_totol, home_list[i].horse_total, home_list[i].sqr);
//	}
//	return 0;
//}