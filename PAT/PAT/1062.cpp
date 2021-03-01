//#include<iostream>
//#include<algorithm>
//#include<iomanip>
//using namespace std;
//struct record {
//	int name;
//	int ta_g;
//	int vi_g;
//	int total_grade;
//};
//bool cmp(const record& r1, const record& r2) {
//	if (r1.total_grade != r2.total_grade) {
//		return r1.total_grade > r2.total_grade;
//	}
//	else if (r1.vi_g != r2.vi_g) {
//		return r1.vi_g > r2.vi_g;
//	}
//	else {
//		return r1.name < r2.name;
//	}
//}
//record ans[4][100005];
//int main() {
//	ios::sync_with_stdio(false);
//	int n, L, H,total = 0;
//	int num[5] = { 0 };
//	cin >> n >> L >> H;
//	for (int i = 0;i < n;i++) {
//		int name;
//		int virtue, talent;
//		cin >> name >> virtue >> talent;
//		if (virtue >= L && talent >= L) {
//			total++;
//			if (virtue >= H && talent >= H) {
//				ans[0][num[1]].name = name;
//				ans[0][num[1]].total_grade = virtue + talent;
//				ans[0][num[1]].ta_g = talent;
//				ans[0][num[1]++].vi_g = virtue;
//			}
//			else if (virtue >= H && talent < H) {
//				ans[1][num[2]].name = name;
//				ans[1][num[2]].total_grade = virtue + talent;
//				ans[1][num[2]].ta_g = talent;
//				ans[1][num[2]++].vi_g = virtue;
//			}
//			else if (virtue < H && talent < H && virtue >= talent) {
//				ans[2][num[3]].name = name;
//				ans[2][num[3]].total_grade = virtue + talent;
//				ans[2][num[3]].ta_g = talent;
//				ans[2][num[3]++].vi_g = virtue;
//			}
//			else {
//				ans[3][num[4]].name = name;
//				ans[3][num[4]].total_grade = virtue + talent;
//				ans[3][num[4]].ta_g = talent;
//				ans[3][num[4]++].vi_g = virtue;
//			}
//		}
//	}
//	cout << total << endl;
//	for (int i = 0;i < 4;i++) {
//		sort(ans[i], ans[i] + num[i + 1], cmp);
//		for (int j = 0;j < num[i + 1];j++) {
//			cout << setw(8) << ans[i][j].name << " " << ans[i][j].vi_g << " " << ans[i][j].ta_g << endl;
//		}
//	}
//	return 0;
//}