/*#include<iostream>
#include<algorithm>
#include <map>
#include <queue>
using namespace std;
int main()
{
	double profit = 1;
	queue<char>q;
	for (int i = 0;i < 3;i++)
	{
		double a, b, c;
		cin >> a >> b >> c;
		double x = max(a, b);
		double y = max(b, c);
		x = max(x, y);
		if (x == a)
		{
			q.push('W');
			profit *= a;
		}
		if (x == b)
		{
			q.push('T');
			profit *= b;
		}
		if (x == c)
		{
			q.push('L');
			profit *= c;
		}
	}
	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}
	profit = (profit * 0.65 - 1) * 2;
	printf("%.2f", profit);
	return 0;
}*/