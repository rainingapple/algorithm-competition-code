/*#include<iostream>
#include<vector>
using namespace std;
vector<string> v;
vector<string> user;
bool check_print(string name,string s)
{
	int flag = false;
	for (int i = 0;i < s.size();i++)
	{
		if (s[i] == '1')
		{
			s[i] = '@';
			flag = true;
		}
		else if (s[i] == '0')
		{
			s[i] = '%';
			flag = true;
		}
		else if (s[i] == 'l')
		{
			s[i] = 'L';
			flag = true;
		}
		else if (s[i] == 'O')
		{
			s[i] = 'o';
			flag = true;
		}
	}
	if (flag)
	{
		v.push_back(s);
		user.push_back(name);
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int n;
	int total = 0;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		string name, password;
		cin >> name >> password;
		if (check_print(name,password))
		{
			total++;
		}
	}
	if (total == 0)
	{
		if (n == 1)
		{
			cout << "There is " << n << " account and no account is modified";
		}
		else
		{
			cout << "There are " << n << " accounts and no account is modified";
		}
	}
	else
	{
		cout << total << endl;
		for (int i = 0;i < v.size();i++)
		{
			cout << user[i] << " " << v[i] << endl;
		}
	}
	return 0;
}*/