/*#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;
int main()
{
	int m, n;
	string s,temp1,temp2;
	static string a1[100];
	map<string, string> ma;
	cin >> m >> n;
	getline(cin, s);
	for (int i = 0;i < m;i++)
	{
		getline(cin, s);
		a1[i] = s;
	}
	for (int i = 0;i < n;i++)
	{
		//浙大那个人这么写的，也很好
		//getline(cin, s);
		//int t = s.find(' ');//查找第一个空格字符的位置，该空格字符可以用来分割变量名和值
		//string s1 = s.substr(0, t), s2 = s.substr(t + 2, s.size() - t - 3);//s1存储变量名，s2存储去除首尾"字符的值
		//ma[s1] = s2;//将变量名和值对应起来
		getline(cin, s);
		//这里在当初提交的时候，发生了sstream过不了的问题，在vs里面可以，但是在dev里面只能用这个形式
		stringstream ss(s);
		ss >> temp1;
		temp2 = s.substr(s.find(temp1) + temp1.size() + 1, s.size() - temp1.size() - 1);
		ma[temp1]= temp2.substr(1,temp2.size()-2);
	}
	for (int i = 0;i < m;i++)
	{
		int j = 0;
		int k1, k2,mark=0;
		string subs;
		for (j=0;j < a1[i].size();)
		{
			k1 = a1[i].find("{{ ",mark);
			k2 = a1[i].find(" }}",mark);
			if (k1 == string::npos || k2 == string::npos)
				break;
			mark = k2 + 3;
			for (;j < k1;j++)
				cout << a1[i][j];
			j = k2 + 3;
			subs = a1[i].substr(k1 + 3, k2-k1-3);
			if (ma.count(subs))
				cout << ma[subs];
		}
		for (;j < a1[i].size();j++)
		{
			cout << a1[i][j];
		}
		cout << endl;
	}
	return 0;
}*/
