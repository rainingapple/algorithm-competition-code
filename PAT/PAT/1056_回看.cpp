////学习这种queue的写法
//#pragma warning (disable:4996)
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//int a[1005];
//int b[1005];
//int main() {
//	int n, ng;
//	int layer = 0;//标志现在是选出第几轮失败者
//	queue<int> q;
//	queue<int> temp;
//	scanf("%d%d", &n, &ng);
//	for (int i = 0;i < n;i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0;i < n;i++) {
//		int temp;
//		scanf("%d", &temp);
//		q.push(temp);
//	}
//	while (q.size() > 1) {
//		int extra = q.size() % ng == 0 ? ng : q.size() % ng;
//		int group = (q.size() - 1) / ng;
//		for (int i = 0;i <= group;i++) {
//			int temp = i == group ? extra : ng;
//			int index = q.front();
//			for (int j = 0;j < temp;j++) {
//				b[q.front()] = group + 2;
//				if (a[q.front()] > a[index]) {
//					index = q.front();
//				}
//				q.pop();
//			}
//			q.push(index);
//		}
//	}
//	b[q.front()] = 1;
//	for (int i = 0;i < n;i++) {
//		cout << b[i];
//		if (i != n - 1) {
//			cout << " ";
//		}
//	}
//	return 0;
//}