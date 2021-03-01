/*#include<iostream>
#include<map>
#include<vector>
#include<sstream>
#include <algorithm>
using namespace std;
map<string, vector<string>> title_list;
map<string, vector<string>> author_list;
map<string, vector<string>> key_list;
map<string, vector<string>> publisher_list;
map<string, vector<string>> publish_year_list;
bool cmp(string s1, string s2) {
	return stoi(s1) < stoi(s2);
}
void find_place(string s)
{
	cout << s << endl;
	char opt = s[0];
	string value = s.substr(3, s.size() - 1);
	if (opt == '1') {
		if (title_list[value].empty()) {
			cout << "Not Found" << endl;
			return;
		}
		sort(title_list[value].begin(), title_list[value].end(),cmp);
		for (int i = 0;i < title_list[value].size();i++)
		{
			cout << title_list[value][i] << endl;
		}
	}
	else if (opt == '2') {
		if (author_list[value].empty()) {
			cout << "Not Found" << endl;
			return;
		}
		sort(author_list[value].begin(), author_list[value].end(), cmp);
		for (int i = 0;i < author_list[value].size();i++)
		{
			cout << author_list[value][i] << endl;
		}
	}
	else if (opt == '3') {
		if (key_list[value].empty()) {
			cout << "Not Found" << endl;
			return;
		}
		sort(key_list[value].begin(), key_list[value].end(),cmp);
		for (int i = 0;i < key_list[value].size();i++)
		{
			cout << key_list[value][i] << endl;
		}
	}
	else if (opt == '4') {
		if (publisher_list[value].empty()) {
			cout << "Not Found" << endl;
			return;
		}
		sort(publisher_list[value].begin(), publisher_list[value].end(), cmp);
		for (int i = 0;i < publisher_list[value].size();i++)
		{
			cout << publisher_list[value][i] << endl;
		}
	}
	else if (opt == '5') {
		if (publish_year_list[value].empty()) {
			cout << "Not Found" << endl;
			return;
		}
		sort(publish_year_list[value].begin(), publish_year_list[value].end(), cmp);
		for (int i = 0;i < publish_year_list[value].size();i++)
		{
			cout << publish_year_list[value][i] << endl;
		}
	}
}
int main()
{
	int n;
	cin >> n;
	string vis;
	getline(cin, vis);
	for (int i = 0;i < n;i++)
	{
		string name, title, author, key, publisher, puyear, temp;
		getline(cin, name);
		getline(cin, title);
		title_list[title].push_back(name);
		getline(cin, author);
		author_list[author].push_back(name);
		getline(cin, temp);
		stringstream ss(temp);
		while (ss >> key) {
			key_list[key].push_back(name);
		}
		getline(cin, publisher);
		publisher_list[publisher].push_back(name);
		getline(cin, puyear);
		publish_year_list[puyear].push_back(name);
	}
	int search_num;
	cin >> search_num;
	string temp;
	getline(cin, temp);
	for (int i = 0;i < search_num;i++)
	{
		string s;
		getline(cin, s);
		find_place(s);
	}
	return 0;
}*/