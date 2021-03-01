//网上题解又有一种新的做法。。。。。
/*#include<iostream>
#include<algorithm>
#include <map>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[1000];
	map<int, int>m;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		m[a[i]]++;
	}
	sort(a,a+n);
	int sum = 0;
	auto i = m.begin();
	for (;i != m.end();i++)
	{
		if (sum == n - sum - i->second)
		{
			cout << i->first;
			break;
		}
		sum += i->second;
	}
	if (i == m.end())
		cout << -1;
	return 0;
}*/

/*#include<iostream>
#include<algorithm>
#include <map>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	auto t1 = equal_range(a.begin(), a.end(), a[n / 2]);
	if (t1.first - a.begin() == a.end() - t1.second)
	{
		cout << a[n / 2];
	}
	else {
		cout << -1;
	}
	return 0;
}*/
