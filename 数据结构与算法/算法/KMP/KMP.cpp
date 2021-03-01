#include<iostream>
using namespace std;
int Next[1005];
void getnext(string s) {
	int len = s.size();
	Next[0] = -1;
	int j = -1;
	for (int i = 1;i < len;i++) {
		while (j != -1 && s[i] != s[j + 1]) {
			cout << 9999;
			j = Next[j];
		}
		if (s[i] == s[j + 1]) {
			j++;
		}
		Next[i] = j;
	}
}
int main() {
	string s;
	cin >> s;
	getnext(s);
	for (int i = 0;i <= s.size();i++) {
		cout << Next[i] << " ";
	}
	return 0;
}