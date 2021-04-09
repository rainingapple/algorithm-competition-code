#include<iostream>
using namespace std;

int main() {
	int m;
	cin >> m;
	int pass[100000005];
	int y[100005];
	for (int i = 0;i < 100000005;i++)
		pass[i] = 0;
	for (int i = 0;i < m;i++) {
		
		int result;
		cin >> y[i] >> result;
		if (result)
			pass[y[i]] += 1;
		else
			pass[y[i]] -= 1;
	}
	int d = y[0];
	for (int i = 0;i < m;i++) {

	
	}

	
	return 0;
}