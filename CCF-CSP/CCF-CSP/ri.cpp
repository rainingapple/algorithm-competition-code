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

	//map 自动对键值排序
	map<int, int> m; //默认初始化为0
	m[1] = 520;
	//可以使用auto，方便！！！
	for (map<int, int>::iterator it = m.begin();it != m.end();it++) {
		cout << it->first << " " << it->second;
		//……
	}

	set<int> st;
	// insert 与 find 都是O(logn),本质是有序表的折半查找，自动去重
	st.insert(1);
	st.find(1);
	for (set<int>::iterator it = st.begin();it != st.end();it++) {
		cout << *it;
		//……
	}

	// 注意几乎所有的运行时错误，都是栈队的报错！！！
	stack<int> sk;
	sk.push(25);
	sk.pop();
	sk.top(); //只是取出来，但是没有弹出来

	queue<int> q;
	q.push(25);
	q.front();
	q.pop();

	//一般用来写堆
	priority_queue<int> q;
	q.push(25);
	q.pop();
	q.front();

	return 0;
}