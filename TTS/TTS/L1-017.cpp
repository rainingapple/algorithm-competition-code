//#include<iostream>
//using namespace std;
//string s;
//int index = 0, sum = 0, sum2 = 0;
//bool f1, f2;
//int main() {
//	cin >> s;
//	if (s[index] == '-') {
//		index++;
//		f1 = true;
//	}
//	for (;index < s.size();index++) {
//		sum++;
//		if (s[index] == '2') {
//			sum2++;
//		}
//	}
//	double ans = (sum2 * 1.0) / (sum * 1.0);
//	if (f1)
//		ans *= 1.5;
//	if ((s[index - 1] - '0') % 2 == 0)
//		ans *= 2;
//	printf("%.2lf%%", ans * 100);
//	return 0;
//}