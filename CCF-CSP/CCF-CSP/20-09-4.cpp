#include<iostream>
#include<math.h>
using namespace std;
int n, m, r;
struct node {
	int count;
	double a[105];
};
node center;
node record[2005];
double compute(node n1, node n2) {
	double ans = 0;
	for (int i = 0;i < n;i++) {
		ans += pow(n1.a[i] - n2.a[i], 2);
	}
	ans = sqrt(ans);
	return ans;
}
double compute_row(node n1, node n2, node n3) {
	double len1 = compute(n1, n2);
	double len2 = compute(n1, n3);
	double len3 = compute(n2, n3);
	return acos((pow(len1, 2) + pow(len2, 2) - pow(len3, 2)) / (2 * len1 * len2));
}
int main() {
	cin >> n >> m >> r;
	center.count = n;
	for (int i = 0;i < n;i++) {
		cin >> center.a[i];
	}
	for (int i = 0;i < m;i++) {
		record[i].count = n;
		for (int j = 0;j < n;j++) {
			cin >> record[i].a[j];
		}
	}
	for (int i = 0;i < m;i++) {
		double ans = 0;
		for (int j = 0;j < m;j++) {
			if (i != j) {
				ans += compute_row(center, record[i], record[j]) * r;
			}
		}
		printf("%.12f\n", ans);
	}
	return 0;
}