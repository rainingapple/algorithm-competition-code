//注意，检错用的测试样例在提交的时候一定要擦干净
/*#include<iostream>
#include<map>
#include <string>
using namespace std;
int main()
{
	int sum = 0;
	string s;
	cin >> s;
	map<int, string>m;
	m[0] = "zero";
	m[1] = "one";
	m[2] = "two";
	m[3] = "three";
	m[4] = "four";
	m[5] = "five";
	m[6] = "six";
	m[7] = "seven";
	m[8] = "eight";
	m[9] = "nine";
	for (int i = 0;i < s.size();i++)
	{
		int temp = s[i] - '0';
		sum += temp;
	}
	string ans = to_string(sum);
	for (int i = 0;i < ans.size()-1;i++)
	{
		cout << m[ans[i]-'0'] << " ";
	}
	cout << m[ans[ans.size() - 1] - '0'];
	return 0;
}*/

/*#include<iostream>
#include<string>
using namespace std;
int main() {
	string s, temp[10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
	cin >> s;
	int sum = 0;
	for (int i = 0;i < s.size();++i)
		sum += s[i] - '0';
	s = to_string(sum);
	for (int i = 0;i < s.size();++i)
		printf("%s%s", i > 0 ? " " : "", temp[s[i] - '0'].c_str());
	return 0;
}*/