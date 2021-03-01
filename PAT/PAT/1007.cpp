/*#include<iostream>
#include<algorithm>
using namespace std;
const int MaxV = 10005;
struct node {
	int head;
	int tail;
	int sum;
};
static int a[MaxV];
static node dp[MaxV];
int main() {
	int n;
	cin >> n;
	bool flag = false;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
		if (a[i] >= 0)
			flag = true;
	}
	if (flag == false) {
		cout << 0 << " " << a[0] << " " << a[n - 1];
		return 0;
	}
	dp[0].sum = a[0];
	dp[0].head = 0;
	dp[0].tail = 0;
	for (int i = 1;i < n;i++) {
		if (dp[i - 1].sum + a[i] > a[i])
		{
			dp[i].sum = dp[i - 1].sum + a[i];
			dp[i].head = dp[i - 1].head;
			dp[i].tail = i;
		}
		else {
			dp[i].sum = a[i];
			dp[i].head = i;
			dp[i].tail = i;
		}
	}
	int ans = 0;
	for (int i = 0;i < n;i++) {
		if (dp[i].sum > dp[ans].sum) {
			ans = i;
		}
	}
	cout << dp[ans].sum << " " << a[dp[ans].head] << " " << a[dp[ans].tail];
	return 0;
}*/