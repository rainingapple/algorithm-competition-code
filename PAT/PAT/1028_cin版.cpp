/*#include<iostream>
#include<vector>
#include <algorithm>
#include<iomanip>
using namespace std;
struct record {
	string id;
	string name;
	int score;
};
bool cmp1(const record& r1, const record& r2) {
	return r1.id < r2.id;
}
bool cmp2(const record& r1, const record& r2) {
	if (r1.name != r2.name) {
		return r1.name < r2.name;
	}
	else {
		return r1.id < r2.id;
	}
}
bool cmp3(const record& r1, const record& r2) {
	if (r1.score != r2.score) {
		return r1.score < r2.score;
	}
	else {
		return r1.id < r2.id;
	}
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n, k;
	cin >> n >> k;
	vector<record> v(n);
	for (int i = 0;i < n;i++) {
		cin >> v[i].id >> v[i].name >> v[i].score;
	}
	if (k == 1) {
		sort(v.begin(), v.end(), cmp1);
	}
	else if (k == 2) {
		sort(v.begin(), v.end(), cmp2);
	}
	else if (k == 3) {
		sort(v.begin(), v.end(), cmp3);
	}
	for (int i = 0;i < n;i++) {
		cout << v[i].id << " " << v[i].name << " " << v[i].score << endl;
	}
	return 0;
}*/