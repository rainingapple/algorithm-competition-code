#include<iostream>
#pragma warning(disable:4996)
using namespace std;
int main() {
	char s[100];
	scanf("%s", s + 1);
	for (int i = 0;i < strlen(s);i++) {
		cout << s[i];
	}
	return 0;
}