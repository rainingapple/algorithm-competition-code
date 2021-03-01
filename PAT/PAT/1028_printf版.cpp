/*#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
struct record {
	int id;
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
	int n, k;
	cin >> n >> k;
	vector<record> v;
	for (int i = 0;i < n;i++) {
		record temp;
		cin >> temp.id >> temp.name >> temp.score;
		v.push_back(temp);
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
		printf("%06d %s %d\n", v[i].id, v[i].name.c_str(), v[i].score);
	}
	return 0;
}*/