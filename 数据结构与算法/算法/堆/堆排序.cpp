//一定注意堆排序的时候，起始节点是1；
#include<iostream>
using namespace std;
const int Max = 1005;
int heap[Max];
int n;
void Adjustdown(int low,int high)
{
	int i = low;
	int j = 2 * i;
	while (j <= high) {
		if (j + 1 <= high && heap[j + 1] > heap[j]) {
			j = j + 1;
		}
		if (heap[i] < heap[j])
		{
			swap(heap[i], heap[j]);
			i = j;
			j = 2 * i;
		}
		else {
			break;
		}
	}
}
void createheap()
{
	for (int i = n/2;i >= 1;i--)
	{
		Adjustdown(i, n);
	}
}
void out_top()
{
	cout << heap[1] << " ";
	heap[1]= heap[n--];
	Adjustdown(1, n);
}
void Adjustup(int low,int high)
{
	int j = high;
	int i = j / 2;
	while (i >= low)
	{
		if (heap[i] < heap[j])
		{
			swap(heap[i], heap[j]);
			j = i;
			i = j / 2;
		}
		else {
			break;
		}
	}
}
void insert(int v) {
	heap[++n] = v;
	Adjustup(1, n);
}
void heap_sort() {
	createheap();
	for (int i = n;i >= 1;i--)
	{
		cout << heap[1] << " ";
		swap(heap[i], heap[1]);
		//注意这里的细节，不能是i--.
		Adjustdown(1, i - 1);
	}
}
int main()
{
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cin >> heap[i];
	}
	heap_sort();
}