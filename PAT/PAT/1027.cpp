/*#include<iostream>
#include<vector>
using namespace std;
vector<char> v;
char d[13] = { '0','1','2','3','4','5','6','7','8','9','A','B','C'};
void from_13(int temp) {
	int a = temp / 13;
	int b = temp % 13;
	v.push_back(d[a]);
	v.push_back(d[b]);
}
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	from_13(a);
	from_13(b);
	from_13(c);
	cout << "#";
	for (int i = 0;i < 6;i++) {
		cout << v[i];
	}
	return 0;
}*/