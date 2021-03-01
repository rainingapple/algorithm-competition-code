#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> v, ans, t_ans;
int main() {
	long long n;
	cin >> n;
	for (int i = sqrt(n);i >= 2;i--) {
		if (n % i == 0) {
			v.push_back(i);
		}
	}
	int pre = v[0];
	t_ans.push_back(v[0]);
	ans = t_ans;
	for (int i = 1;i < v.size();i++) {
		if (v[i] - pre == -1) {
			t_ans.push_back(v[i]);
			pre = v[i];
		}
		else {
			t_ans.clear();
			t_ans.push_back(v[i]);
			pre = v[i];
		}
		if (t_ans.size() > ans.size()) {
			ans = t_ans;
		}
	}
	cout << ans.size() << endl;
	for (int i = ans.size()-1;i >0;i--) {
		cout << ans[i] << "*";
	}
	cout << ans[0];
	return 0;
}