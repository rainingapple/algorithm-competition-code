//#pragma warning(disable:4996)
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//vector<int> hobby_person[1005];
//vector<int> person_hobby[1005];
//vector<int> ans;
//int father[1005];
//bool vis[1005];
//int total[1005];
//int n;
//int find_father(int x) {
//	int a = x;
//	if (father[x] != x) {
//		x = father[x];
//	}
//	while (father[a] != a) {
//		int z = a;
//		a = father[a];
//		father[z] = x;
//	}
//	return x;
//}
//void init() {
//	for (int i = 1;i <= n;i++) {
//		father[i] = i;
//		total[i] = 0;
//		vis[i] = false;
//	}
//}
//void process() {
//	for (int i = 1;i < n;i++) {
//		for (int j = 0;j < person_hobby[i].size();i++) {
//			for (int k = 0;k < hobby_person[person_hobby[i][j]].size();k++) {
//				int potential_friend = hobby_person[person_hobby[i][j]][k];
//				if (potential_friend > i) {
//					int faA = find_father(i);
//					int faB = find_father(potential_friend);
//					if (faA != faB) {
//						father[faB] = faA;
//					}
//				}
//			}
//		}
//	}
//	for (int i = 1;i <= n;i++) {
//		cout << find_father(i) << endl;
//		total[find_father(i)]++;
//	}
//}
//bool cmp(int a,int b) {
//	return a > b;
//}
//void show() {
//	for (int i = 1;i <= n;i++) {
//		if (total[i]!=0) {
//			ans.push_back(total[i]);
//		}
//	}
//	sort(ans.begin(), ans.end(), cmp);
//	cout << ans.size() << endl;
//	for (int i = 0;i < ans.size();i++) {
//		cout << ans[i];
//		if (i != ans.size() - 1)
//			cout << " ";
//	}
//}
//int main() {
//	scanf("%d", &n);
//	for (int i = 1;i <= n;i++) {
//		string s;
//		cin >> s;
//		for (int j = 0;j < s[0] - '0';j++) {
//			int temp;
//			scanf("%d", &temp);
//			person_hobby[i].push_back(temp);
//			hobby_person[temp].push_back(i);
//		}
//	}
//	init();
//	process();
//	show();
//	return 0;
//}