#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<stack>
#include<set>
#pragma warning(disable:4996)
using namespace std;
int main() {
	vector<int> v(100);
	v.push_back(1);
	v[20] = 10;
	cout << v[20] << endl << v[98];

	//map �Զ��Լ�ֵ����
	map<int, int> m; //Ĭ�ϳ�ʼ��Ϊ0
	m[1] = 520;
	//����ʹ��auto�����㣡����
	for (map<int, int>::iterator it = m.begin();it != m.end();it++) {
		cout << it->first << " " << it->second;
		//����
	}

	set<int> st;
	// insert �� find ����O(logn),�������������۰���ң��Զ�ȥ��
	st.insert(1);
	st.find(1);
	for (set<int>::iterator it = st.begin();it != st.end();it++) {
		cout << *it;
		//����
	}

	// ע�⼸�����е�����ʱ���󣬶���ջ�ӵı�������
	stack<int> sk;
	sk.push(25);
	sk.pop();
	sk.top(); //ֻ��ȡ����������û�е�����

	queue<int> q;
	q.push(25);
	q.front();
	q.pop();

	//һ������д��
	priority_queue<int> q;
	q.push(25);
	q.pop();
	q.front();

	return 0;
}