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
		//����Ǹ�����ôд�ģ�Ҳ�ܺ�
		//getline(cin, s);
		//int t = s.find(' ');//���ҵ�һ���ո��ַ���λ�ã��ÿո��ַ����������ָ��������ֵ
		//string s1 = s.substr(0, t), s2 = s.substr(t + 2, s.size() - t - 3);//s1�洢��������s2�洢ȥ����β"�ַ���ֵ
		//ma[s1] = s2;//����������ֵ��Ӧ����
		getline(cin, s);
		//�����ڵ����ύ��ʱ�򣬷�����sstream�����˵����⣬��vs������ԣ�������dev����ֻ���������ʽ
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
