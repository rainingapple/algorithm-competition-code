//#include<iostream>
//#include<queue>
//using namespace std;
//int main() {
//	queue<int> q;
//	int n, k, now_num = 1;
//	bool status[1005];
//	cin >> n >> k;
//	for (int i = 1;i <= n;i++) {
//		q.push(i);
//	}
//	while (q.size()!=1) {
//		int now_p = q.front();
//		q.pop();
//		if (now_num % k == 0 || now_num % 10 == k) {
//			status[now_p] = true;
//		}
//		else {
//			q.push(now_p);
//		}
//		now_num++;
//	}
//	cout << q.front();
//	return 0;
//}