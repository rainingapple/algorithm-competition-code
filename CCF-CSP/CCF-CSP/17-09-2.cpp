//#include<iostream>
//#include<vector>
//#include<queue>
//#include<map>
//#include<algorithm>
//using namespace std;
//struct node {
//	int no;
//	int flag;
//	int time;
//	node(int a, int b, int c) :no(a), flag(b), time(c) {}
//};
//int n, k;
//int key[1005];
//vector<node> action;
//priority_queue<int,vector<int>,greater<int>> q;
//map<int, int> pos;
//bool cmp(node n1, node n2) {
//	if (n1.time != n2.time)
//		return n1.time < n2.time;
//	else if (n1.flag != n2.flag) {
//		return n1.flag > n2.flag;
//	}
//	else {
//		return n1.no < n2.no;
//	}
//}
//void fuc(node x) {
//	int no = x.no;
//	int flag = x.flag;
//	int time = x.time;
//	if (flag == 1) {
//		int top = q.top();
//		q.pop();
//		key[top] = no;
//		pos[no] = top;
//	}
//	else {
//		key[pos[no]] = 0;
//		q.push(pos[no]);
//	}
//}
//int main() {
//	cin >> n >> k;
//	for (int i = 1;i <= n;i++) {
//		key[i] = i;
//		pos[i] = i;
//	}
//	for (int i = 0;i < k;i++) {
//		int no, b_time, e_time;
//		cin >> no >> b_time >> e_time;
//		action.push_back(node(no, 0, b_time));
//		action.push_back(node(no, 1, b_time+e_time));
//	}
//	sort(action.begin(), action.end(), cmp);
//	for (auto i = action.begin();i < action.end();i++) {
//		fuc(*i);
//	}
//	for (int i = 1;i <= n;i++) {
//		cout << key[i] << " ";
//	}
//	return 0;
//}