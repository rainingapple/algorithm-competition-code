#include<iostream>
#include<string>
#include <vector>
using namespace std;
//注意0
//法一
/*int main()
{
	int a, b;
	bool flag = false;
	cin >> a >> b;
	int c = a + b;
	if (c == 0)
	{
		cout << 0;
		return 0;
	}
	if (c < 0)
		flag = true;
	c = abs(c);
	int output[7] = {-1,-1,-1,-1,-1,-1,-1};
	int count = 0;
	int wei = 0;
	int k = 0;
	while (c != 0)
	{
		int temp;
		temp = c % 10;
		wei++;
		output[k++] = temp;
		c = c / 10;
	}
	if (flag == true)
		cout << "-";
	while (wei--)
	{
		if (output[wei] != -1)
		{
			cout << output[wei];
		}
		if (wei%3==0&&wei!=0)
		{
			cout << ",";
		}
	}
	return 0;
}*/


//法二
/*int main()
{
	int a, b;
	cin >> a >> b;
	int c = a + b;
	if (c < 0)
		cout << "-";
	c = abs(c);
	string s = to_string(c);
	int i = s.size() % 3 == 0 ? 3 : s.size() % 3;
	cout << s.substr(0, i);
	for (;i < s.size();i = i + 3)
	{
		cout << "," << s.substr(i, 3);
	}
	return 0;
}*/

//法三
/*int main()
{
	int a, b;
	cin >> a >> b;
	int c = a + b;
	if (c < 0)
		cout << "-";
	c = abs(c);
	string s = to_string(c);
	vector<string> v;
	for (int i = s.size();i > 0;i = i - 3)
		v.push_back(i > 2 ? s.substr(i - 3,3) : s.substr(0, i));
	for (int i= v.size() - 1;i>0;i--)
		cout << v[i]<< ",";
	cout << v.front();
	return 0;
}*/
