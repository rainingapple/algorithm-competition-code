/*#include<iostream>
using namespace std;
inline void add_time(int floor,int &total,int &now)
{
	if (now == floor)
		return;
	int temp = (floor - now) > 0 ? (floor - now) * 6 : (now - floor) * 4;
	total += temp + 5;
	now = floor;
}
int main()
{
	int n;
	cin >> n;
	int total = 0;
	int now = 0;
	for (int i = 0;i < n;i++)
	{
		int tar;
		cin >> tar;
		add_time(tar, total, now);
	}
	cout << total;
	return 0;
}*/