#include<iostream>
#include<queue>
using namespace std;
const int MaxV = 1005;
int main()
{
	int n;
	int ans = 0;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>>q;
	for (int i = 0;i < n;i++)
	{
		int temp;
		cin >> temp;
		q.push(temp);
	}
	while (q.size() > 1) {
		int x = q.top();
		q.pop();
		int y = q.top();
		q.pop();
		q.push(x + y);
		ans += x + y;
	}
}