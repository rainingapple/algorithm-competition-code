//最当初写的，合并法比较好，但是还是生成了最后的升序序列，其实可以优化
/*#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int sum1, sum2;
	vector<long> v1;
	vector<long> v2;
	vector<long> v;
	cin >> sum1;
	for (int i = 0;i < sum1;i++) {
		long temp;
		cin >> temp;
		v1.push_back(temp);
	}
	cin >> sum2;
	for (int i = 0;i < sum2;i++) {
		long temp;
		cin >> temp;
		v2.push_back(temp);
	}
	int i = 0, j = 0;
	while(i<sum1&&j<sum2) {
		if (v1[i] <= v2[j]) {
			v.push_back(v1[i]);
			i++;
		}
		else if (v1[i] > v2[j]) {
			v.push_back(v2[j]);
			j++;
		}
	}
	while (i < sum1) {
		v.push_back(v1[i]);
		i++;
	}
	while (j < sum2) {
		v.push_back(v2[j]);
		j++;
	}
	cout << v[(sum1 + sum2 - 1) / 2];
	return 0;
}*/