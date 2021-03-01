////用时两个小时，最后得了70分
////我真的尽力了，想死的心都有了
////md字符串我tm。。。。。。。
//#include<iostream>
//#include<map>
//#include <string>
//#include<sstream>
//#include <vector>
//using namespace std;
//struct role
//{
//	int num;
//	map<string, int> m2;
//};
//int main()
//{
//	//**************第一部分*************************
//	string bis;
//	int n1;
//	cin >> n1;
//	getline(cin, bis);
//	map<string, int> m1;
//	for (int i = 0;i < n1;i++)
//	{
//		string temp;
//		getline(cin, temp);
//		int flag = temp.find(':');
//		if (flag != string::npos)
//		{
//			m1[temp.substr(0, flag)] = temp[temp.size()-1]-'0';
//		}
//		else
//		{
//			m1[temp] = 10;
//		}
//	}
//	//**************************第二部分****************
//	int n2;
//	cin >> n2;
//	getline(cin, bis);
//	map<string,role> v;
//	for (int i = 0;i < n2;i++)
//	{
//		string temp, name;
//		int num;
//		getline(cin, temp);
//		stringstream ss(temp);
//		ss >> name;
//		ss >> num;
//		role r1;
//		r1.num = num;
//		for (int j = 0;j < num;j++)
//		{
//			string temp;
//			ss >> temp;
//			int flag = temp.find(':');
//			if (flag != string::npos)
//			{
//				string s1 = temp.substr(0, flag);
//				int t1 = temp[temp.size() - 1] - '0';
//				if(!r1.m2.count(s1))
//					r1.m2[s1] = t1;
//				if (r1.m2.count(s1) && r1.m2[s1] < t1)
//					r1.m2[s1] = t1;
//			}
//			else
//			{
//				r1.m2[temp] = 10;
//			}
//		}
//		v[name] = r1;
//	}
//	//******************************第三部分****************
//	int n3;
//	cin >> n3;
//	getline(cin, bis);
//	map<string, vector<string>> user;
//	for (int i = 0;i < n3;i++)
//	{
//		string temp,name,r_temp;
//		int num;
//		getline(cin, temp);
//		stringstream ss(temp);
//		ss >> name;
//		ss >> num;
//		vector<string> v2;
//		for (int j = 0;j <num ;j++)
//		{
//			ss >> r_temp;
//			v2.push_back(r_temp);
//		}
//		user[name] = v2;
//	}
//	//**************第四部分***************
//	int n4;
//	cin >> n4;
//	getline(cin, bis);
//	for (int i = 0;i < n4;i++)
//	{
//		string temp,name, power_s;
//		getline(cin, temp);
//		stringstream ss(temp);
//		bool fg=false;
//		ss >> name;
//		ss >> power_s;
//		string final;
//		int state;
//		int ts = power_s.find(':');
//		if (ts == string::npos)
//		{
//			final = power_s;
//		}
//		else
//		{
//			final = power_s.substr(0, ts);
//			state= power_s[power_s.size() - 1] - '0';
//		}
//
//		//最终加载
//		if (!user.count(name)||!m1.count(final))
//			cout << "false"<<endl;
//		else if (ts==string::npos&&m1[final]==10)
//		{
//			for (int j = 0;j < user[name].size();j++)
//			{
//				if (v[user[name][j]].m2.count(final))
//					fg = true;
//			}
//			if (fg == true)
//				cout << "true"<<endl;
//			else
//				cout << "false"<<endl;
//		}
//		else if (ts == string::npos && m1[final] != 10)
//		{
//			for (int j = 0;j < user[name].size();j++)
//			{
//				if (v[user[name][j]].m2.count(final))
//					fg = true;break;
//			}
//			int max = 0;
//			for (int j = 0;j < user[name].size();j++)
//			{
//				if (v[user[name][j]].m2[final] > max)
//					max = v[user[name][j]].m2[final];
//			}
//			if (fg == false)
//				cout << "false"<<endl;
//			else
//				cout << max<<endl;
//		}
//		else
//		{
//			for (int j = 0;j < user[name].size();j++)
//			{
//				if (v[user[name][j]].m2.count(final))
//					fg = true;break;
//			}
//			int max = -1;
//			for (int j = 0;j < user[name].size();j++)
//			{
//				if (v[user[name][j]].m2[final] > max)
//					max = v[user[name][j]].m2[final];
//			}
//			if (fg == false)
//				cout << "false" << endl;
//			else if (max >= state)
//				cout << "true" << endl;
//			else
//				cout << "false" << endl;
//		}
//	}
//	return 0;
//}