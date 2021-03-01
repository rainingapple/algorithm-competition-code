/*#include<iostream>
#include<map>
#include<math.h>
#include<algorithm>
using namespace std;
map<char, int> m;
long long radix_cal(string s, long long ra)
{
	long long fin = 0;
	for (int i = 0;i < s.size();i++)
	{
		fin = fin * ra + m[s[i]];
	}
	return fin;
}
int main()
{
	int mark = 0;
	for (char i = '0'; i <= '9';i++)
	{
		m[i] = mark++;
	}
	for (char i = 'a';i <= 'z';i++)
	{
		m[i] = mark++;
	}
	string n1, n2;
	long long tag, radix;
	cin >> n1 >> n2 >> tag >> radix;
	long long value;
	tag == 1 ? value = radix_cal(n1, radix) : value = radix_cal(n2, radix);
	if (value == 0)
	{
		cout << 2;
		return 0;
	}
	string need_cal;
	tag == 1 ? need_cal = n2 : need_cal = n1;
	bool flag = false;
	long long low = 2;
	long long high = value;
	for (int i = 0;i < need_cal.size();i++)
	{
		low = max(low, (long long)m[need_cal[i]] + 1);
	}
	while (low < high)
	{
		long long mid = (low + high) / 2;
		if (radix_cal(need_cal, mid) < 0)
		{
			high = mid;
		}
		else if (radix_cal(need_cal, mid) == value)
		{
			flag = true;
			high = mid;
		}
		else if (radix_cal(need_cal, mid) > value)
		{
			high = mid;
		}
		else if (radix_cal(need_cal, mid) < value)
		{
			low = mid + 1;
		}
	}
	if (flag == false)
		cout << "Impossible";
	else
		cout << low;
	return 0;
}*/