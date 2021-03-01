//һ��ע�⣬�����vis��ʶ�����Ƿ����
//��ôҲ����ζ��vis��䲻�ܷ��ڳ��������Ӧ�÷������ʱ��
//��Ȼ�������������ǶԵģ���������
//����⻹���
//�ͱ�������⣬һ��д����41�Σ�һ����26�Σ��������Ӳ���������
#include<iostream>
#include <queue>
using namespace std;
char G[100][100];
bool vis[100][100];
int X[4] = { 1,-1,0,0 };
int Y[4] = { 0,0,-1,1 };
int m, n;
int q_count = 0;
struct node {
	int x;
	int y;
	int layer;
}Node;
node source, destin;
bool judge(int x,int y) {
	if (x<0 || x>m || y<0 || y>n)
		return false;
	if (vis[x][y] == true)
		return false;
	if (G[x][y] == '*')
		return false;
	return true;
}
int BFS() {
	queue<node> q;
	source.layer = 0;
	q.push(source);
	vis[source.x][source.y] = true;
	while (!q.empty()) {
		node temp = q.front();
		q.pop();
		q_count++;
		cout << temp.x << " " << temp.y << " " << temp.layer << endl;
		if (temp.x == destin.x && temp.y == destin.y) {
			return temp.layer;
		}
		for (int i = 0;i < 4;i++) {
			Node.x = temp.x + X[i];
			Node.y = temp.y + Y[i];
			Node.layer = temp.layer + 1;
			if (judge(Node.x, Node.y)) {
				vis[Node.x][Node.y] = true;
				q.push(Node);
			}
		}
	}
}
int main() {
	cin >> m >> n;
	for (int i = 0;i < m;i++) {
		for (int j = 0;j < n;j++) {
			cin >> G[i][j];
		}
	}
	cin >> source.x >> source.y >> destin.x >> destin.y;
	cout << BFS() << endl;
	cout << q_count;
	return 0;
}