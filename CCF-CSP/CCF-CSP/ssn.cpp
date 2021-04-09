#include<iostream>
using namespace std;
int predict(int p, int m,int y[],int results[]) {
	int R = 0;
	for (int i = 0;i < m;i++) {
		if ((y[i] >= p) == results[i])
			R += 1;
	}
	return R;
}
int main() {
	int m;
	int y[100005];
	int results[100005];

	cin >> m;
	for (int i = 0;i < m;i++) {
		cin >> y[i] >> results[i];
	}

	int d = y[0];
	int max = predict(y[0], m, y, results);

	for (int i = 1;i < m;i++) {
		if (predict(y[i], m, y, results) > max) {
			max = predict(y[i], m, y, results);
			d = y[i];
		}
		else if (predict(y[i], m, y, results) == max && y[i] > d)
			d = y[i];
		
	}
	
	cout << d;
	return 0;
}