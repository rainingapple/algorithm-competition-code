#include<iostream>
using namespace std;
int n = 5;
struct node {
	node* next;
	int data;
};
node* create(int a[]) {
	node* L = new node;
	L->next = NULL;
	node* pre = L;
	for (int i = 0;i < n;i++) {
		node* temp = new node;
		temp->data = a[i];
		temp->next = NULL;
		pre->next = temp;
		pre = temp;
	}
	return L;
}
int search(node* L, int x) {
	int count = 0;
	node* p = L;
	while (p != NULL) {
		if (p->data == x)
			count++;
		p = p->next;
	}
	return count;
}
void insert(node* L, int pos, int x) {
	node* p = L;
	for (int i = 0;i < pos - 1;i++) {
		p = p->next;
	}
	node* temp = new node;
	temp->data = x;
	temp->next = p->next;
	p->next = temp;
}
void del(node* L, int x) {
	node* pre = L;
	node* p = L->next;
	while (p != NULL) {
		if (p->data == x) {
			pre->next = p->next;
			delete(p);
			p = pre->next;
		}
		else {
			pre = p;
			p = p->next;
		}
	}
}
void show(node* L) {
	node* temp = L->next;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
int main()
{
	int data[5] = { 5,3,6,3,2 };
	node *L = create(data);
	show(L);
	del(L, 3);
	show(L);
	return 0;
}