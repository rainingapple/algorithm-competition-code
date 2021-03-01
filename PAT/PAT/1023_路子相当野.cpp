/*#include<iostream>
#include <map>
using namespace std;
string s;
int n;
int a[25];
int b[25];
bool flag = true;
void check()
{
	map<int, int> m1;
	map<int, int> m2;
	for (int i = 0;i < n;i++)
	{
		m1[a[i]]++;
		m2[b[i]]++;
	}
	for (int i = 1;i <= 9;i++) {
		if (m1[i] != m2[i])
		{
			flag = false;
			break;
		}
	}
}
int main()
{
	fill(a, a + 25, 0);
	fill(b, b + 25, 0);
	cin >> s;
	n = s.size();
	for (int i = 0;i < n;i++) {
		a[i] = s[i]-'0';
	}
	if (a[0] <= 4) {
		for (int i = n - 1;i >= 0;i--) {
			int temp = a[i] * 2;
			b[i] += temp % 10;
			if (temp >= 10) {
				b[i - 1] = temp / 10;
			}
		}
		check();
	}
	else {
		for (int i = n;i >= 1;i--) {
			int temp = a[i - 1] * 2;
			b[i] += temp % 10;
			if (temp >= 10) {
				b[i - 1] = temp / 10;
			}
		}
		n++;
		flag = false;
	}
	if (flag)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	for (int i = 0;i < n;i++)
	{
		cout << b[i];
	}
	return 0;
}*/