//#pragma warning(disable:4996)
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//const int INF = 1000000000;
//using namespace std;
//int n, m, pre, layer = 0, total = 0;
//bool flag = false, flag2 = true;
//priority_queue <int, vector<int>, greater<int>> q;
//queue<int> dirt;//��һ�ֵ�����������
//vector<int> ans[300];
//int next_val() {
//	int temp_val;
//	if (!dirt.empty() && flag2) {
//		temp_val = dirt.front();
//		dirt.pop();
//	}
//	else {
//		flag2 = false;
//		flag = true;
//		total++;
//		if (total > n)
//			return INF;
//		scanf("%d", &temp_val);
//	}
//	return temp_val;
//}
//int main() {
//	scanf("%d%d", &n, &m);
//	while (true) {
//		//cout << "a new trun\n";
//		flag2 = true;
//		for (int i = 0;i < m;i++) {
//			int temp = next_val();
//			if (total > n && flag)
//			{
//				flag = false;
//				break;
//			}
//			//cout << temp;
//			q.push(temp);
//		}
//		while (!q.empty()) {
//			pre = q.top();
//			//cout << pre << "���";
//			ans[layer].push_back(pre);
//			q.pop();
//			int val = next_val();
//			if (flag && total > n)
//			{
//				flag = false;
//				continue;
//			}
//			if (val >= pre) {
//				//cout << val << "����" << endl;
//				q.push(val);
//			}
//			else {
//				//cout << val << "������һѭ��" << endl;
//				dirt.push(val);
//			}
//		}
//		/*for (int i = 0;i < layer;i++) {
//			for (int j = 0;j < ans[i].size();j++) {
//				cout << ans[i][j];
//				if (j != ans[i].size() - 1) {
//					cout << " ";
//				}
//			}
//			cout << endl;
//		}*/
//		if (dirt.empty())
//			break;
//		else
//			layer++;
//	}
//	//���ģ��
//	for (int i = 0;i <= layer;i++) {
//		for (int j = 0;j < ans[i].size();j++) {
//			cout << ans[i][j];
//			if (j != ans[i].size() - 1) {
//				cout << " ";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}