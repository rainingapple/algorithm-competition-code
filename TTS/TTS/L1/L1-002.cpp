//#include<iostream>
//#pragma warning(disable:4996)
//using namespace std;
//int main() {
//	int n, sum = 1, index = 1, len;
//	char c;
//	scanf("%d %c", &n, &c);
//	for (;;index++) {
//		sum += (2 + index * 4);
//		if (sum > n) {
//			sum -= (2 + index * 4);
//			break;
//		}
//	}
//	len = 2 * index - 1;
//	for (int k = 0;k < index;k++) {
//		for (int i = 0;i < k;i++) {
//			printf(" ");
//		}
//		for (int i = 0;i < len-2*k;i++) {
//			printf("%c", c);
//		}
//		cout << endl;
//	}
//	for (int k = index-2;k >=0;k--) {
//		for (int i = 0;i < k;i++) {
//			printf(" ");
//		}
//		for (int i = 0;i < len - 2 * k;i++) {
//			printf("%c", c);
//		}
//		cout << endl;
//	}
//	printf("%d", n - sum);
//	return 0;
//}