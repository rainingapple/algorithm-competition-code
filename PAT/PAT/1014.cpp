/*#include<queue>
#include<iostream>
using namespace std;
struct person {
	int no;
	int value;
	person(int a, int b) :no(a), value(b) {}
};
struct window {
	int n_time;
	queue<person> cus_list;
};
int n, m, k, q;
window window_list[25];
int customer[1005];
queue<person> c;
void change(int value) {
	int hour = (value / 60 + 8)%24;
	int min = value % 60;
	printf("%.2d:%.2d\n", hour, min);
}
void cal(int no)
{
	if (window_list[no].cus_list.empty())
		return;
	int temp = window_list[no].cus_list.front().value;
	if (window_list[no].n_time >= 540)
	{
		customer[window_list[no].cus_list.front().no] = 1500;
		window_list[no].cus_list.pop();
		return;
	}
	window_list[no].n_time += temp;
	customer[window_list[no].cus_list.front().no] = window_list[no].n_time;
	window_list[no].cus_list.pop();
}
void init()
{
	cin >> n >> m >> k >> q;
	for (int i = 0;i < n;i++) {
		window_list[i].n_time = 0;
	}
	for (int i = 0;i < k;i++) {
		int temp;
		cin >> temp;
		c.push(person(i + 1, temp));
	}
	for (int i = 0;i < m;i++) {
		for (int j = 0;j < n;j++) {
			if (!c.empty()) {
				int temp = c.front().value;
				window_list[j].cus_list.push(person(c.front().no, temp));
				c.pop();
			}
		}
	}
	for (int i = 0;i < n;i++) {
		cal(i);
	}
}
void search_and_insert(person p)
{
	int point = 0;
	int fin_time = 1000;
	for (int i = 0;i < n;i++) {
		if (window_list[i].n_time < fin_time) {
			point = i;
			fin_time = window_list[i].n_time;
		}
	}
	window_list[point].cus_list.push(p);
	cal(point);
}
int main()
{
	init();
	while (!c.empty())
	{
		person temp = c.front();
		search_and_insert(temp);
		c.pop();
	}
	for (int j = 0;j < m;j++) {
		for (int i = 0;i < n;i++) {
			cal(i);
		}
	}
	for (int i = 0;i < q;i++) {
		int temp;
		cin >> temp;
		if (customer[temp] == 1500) {
			cout << "Sorry" << endl;
		}
		else {
			change(customer[temp]);
		}
	}
	return 0;
}*/