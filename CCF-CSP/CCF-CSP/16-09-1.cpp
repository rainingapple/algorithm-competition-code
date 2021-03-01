//注意这个里面是之间的变化，初始值那种不算
//abs在vs可用，但是dev里面要加入algorithm
/*#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int ft = 0, now = 0;
	cin >> ft;
	int max = 0;
	for (int i = 1;i < n;i++)
	{
		cin >> now;
		if (abs(now - ft) > max)
			max = abs(now - ft);
		ft = now;
	}
	cout << max;
	return 0;
}*/