//看过参考了，用的法一。
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	//法一，看成是一个字符串
	string s;
	cin >> s;
	int sum = 0;
	for (int i = s.size() - 1;i != -1;i--)
		sum += s[i]-'0';
	cout << sum;
	return 0;
	//法二，生求
	int t;
	int sum = 0;
	cin >> t;
	while (t > 0)
	{
		sum += t % 10;
		t = t / 10;
	}
	cout << sum;
}*/