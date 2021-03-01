//#pragma warning (disable:4996)
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct record {
//	string name;
//	int age;
//	int income;
//};
//record r[100005];
//bool cmp(const record &r1,const record &r2) {
//	if (r1.income != r2.income) {
//		return r1.income > r2.income;
//	}
//	else if (r1.age != r2.age) {
//		return r1.age < r2.age;
//	}
//	else {
//		return r1.name < r2.name;
//	}
//}
//int main() {
//	int n, k;
//	scanf("%d%d", &n, &k);
//	for (int i = 0;i < n;i++) {
//		cin >> r[i].name;
//		scanf("%d%d", &r[i].age, &r[i].income);
//	}
//	sort(r, r + n,cmp);
//	for (int i = 0;i < k;i++) {
//		int max_out, amin, amax;
//		scanf("%d%d%d", &max_out, &amin, &amax);
//		printf("Case #%d:\n", i + 1);
//		int num = 0;
//		bool flag = false;
//		for (int j = 0;j < n && num < max_out;j++) {
//			if (r[j].age >= amin && r[j].age <= amax) {
//				flag = true;
//				printf("%s %d %d\n", r[j].name.c_str(), r[j].age, r[j].income);
//				num++;
//			}
//		}
//		if (flag == false) {
//			printf("None\n");
//		}
//	}
//	return 0;
//}