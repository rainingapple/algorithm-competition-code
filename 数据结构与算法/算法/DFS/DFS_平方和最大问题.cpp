#include<iostream>
#include<vector>
using namespace std;
int n, k;
int sum;
int ans = 0;
int d[100];
vector<int> temp_path;
vector<int> path;
void DFS(int count,int nowk, int n_count, int sq_sum) {
	if (n_count == sum && nowk==k) {
		if (sq_sum > ans) {
			ans = sq_sum;
			path = temp_path;
		}
		return;
	}
	if (count == n || nowk > k || n_count > sum)
		return;
	DFS(count + 1, nowk, n_count, sq_sum);
	temp_path.push_back(d[count]);
	DFS(count + 1, nowk + 1, n_count + d[count], sq_sum + d[count] * d[count]);
	temp_path.pop_back();
}
int main() {
	cin >> n >> sum >> k;
	return 0;
}