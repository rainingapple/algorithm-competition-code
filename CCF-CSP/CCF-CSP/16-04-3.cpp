//这一年的题有毒。。。。。
//这个注意最后要处理全是///
//还要注意要用getline否则cin读不了空行
/*#include<iostream>
#include<string>
#include <vector>
#include <stack>
using namespace std;
vector<string> ans;
int split(string s)
{
	vector<string> v;
	string sub=s;
	string temp,temp2;
	int pos1,pos2;
	pos1 = sub.find('/');
	sub = sub.substr(pos1 + 1, sub.size() - pos1 - 1);
	while (pos1 != string::npos)
	{
		pos1 = sub.find('/');
		temp = sub.substr(0, pos1);
		if (temp == ".."&&!v.empty())
		{
			v.pop_back();
		}
		else if (temp == ".." && v.empty())
		{

		}
		else if (temp == "."||temp=="")
		{

		}
		else
		{
			v.push_back(temp);
		}
		sub = sub.substr(pos1+1,sub.size()-pos1-1);
	}
	string ans_temp = "";
	for (vector<string>::iterator i = v.begin();i != v.end();i++)
	{
		ans_temp = ans_temp + "/"+*i;
	}
	if (ans_temp == "")
		ans_temp = "/";
	else if (ans_temp[ans_temp.size() - 1] == '/')
		ans_temp = ans_temp.substr(0, ans_temp.size() - 1);
	ans.push_back(ans_temp);
	return 0;
}
int main()
{
	int n;
	cin >> n;
	string root;
	getline(cin, root);
	getline(cin, root);
	string s1;
	for (int i = 0;i < n;i++)
	{
		getline(cin, s1);
		if (s1 == "")
		{
			split(root);
		}
		else if (s1[0] == '/')
		{
			split(s1);
		}
		else
		{
			split(root + "/"+s1);
		}
	}
	for (vector<string>::iterator i = ans.begin();i != ans.end();i++)
	{
		cout << *i << endl;
	}
	return 0;
}*/