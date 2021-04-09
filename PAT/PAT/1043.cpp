//#include<iostream>
//using namespace std;
////我们只需要判断每一段中，以第一个字母为flag，能不能把后面分成左边小于他，右边大于等于它
////在判别完成之后顺便把树建了，方便后面输出
//const int MaxV = 1005;
//int a[MaxV];
//struct node {
//	int data;
//	node* lchild;
//	node* rchild;
//};
//node* the_root;
//bool judge(int start, int end)
//{
//	if (start >= end)
//		return true;
//	int mark = a[start];
//	int mark1 = end + 1;
//	for (int i = start+1; i <= end;i++)
//	{
//		if (a[i] >= mark)
//		{
//			mark1 = i;
//			break;
//		}
//	}
//	for (int i = mark1;i <= end;i++)
//	{
//		if (a[i] < mark)
//			return false;
//	}
//	bool flag1 = judge(start + 1, mark1 - 1);
//	bool flag2 = judge(mark1, end);
//	if (flag1 && flag2)
//		return true;
//}
//bool judge_rever(int start, int end)
//{
//	if (start >= end)
//		return true;
//	int mark = a[start];
//	int mark1 = end + 1;
//	for (int i = start + 1; i <= end;i++)
//	{
//		if (a[i] < mark)
//		{
//			mark1 = i;
//			break;
//		}
//	}
//	for (int i = mark1;i <= end;i++)
//	{
//		if (a[i] >= mark)
//			return false;
//	}
//	bool flag1 = judge_rever(start + 1, mark1 - 1);
//	bool flag2 = judge_rever(mark1, end);
//	if (flag1 && flag2)
//		return true;
//}
//node* create_BST(int start,int end)
//{
//	if (start > end)
//		return NULL;
//	if (start == end)
//	{
//		node* root = new node;
//		root->data = a[start];
//		root->lchild = NULL;
//		root->rchild = NULL;
//		return root;
//	}
//	int mark = a[start];
//	int mark1 = end + 1;
//	for (int i = start + 1; i <= end;i++)
//	{
//		if (a[i] >= mark)
//		{
//			mark1 = i;
//			break;
//		}
//	}
//	node *lchild = create_BST(start + 1, mark1 - 1);
//	node *rchild = create_BST(mark1, end);
//	node* root = new node;
//	root->data = mark;
//	root->lchild = lchild;
//	root->rchild = rchild;
//	return root;
//}
//node* create_BST_rever(int start, int end)
//{
//	if (start > end)
//		return NULL;
//	if (start == end)
//	{
//		node* root = new node;
//		root->data = a[start];
//		root->lchild = NULL;
//		root->rchild = NULL;
//		return root;
//	}
//	int mark = a[start];
//	int mark1 = end + 1;
//	for (int i = start + 1; i <= end;i++)
//	{
//		if (a[i] < mark)
//		{
//			mark1 = i;
//			break;
//		}
//	}
//	node* lc = create_BST_rever(start + 1, mark1 - 1);
//	node* rc = create_BST_rever(mark1, end);
//	node* root = new node;
//	root->data = mark;
//	root->lchild = lc;
//	root->rchild = rc;
//	return root;
//}
//void postorder(node* root)
//{
//	if (root == NULL)
//		return;
//	postorder(root->lchild);
//	postorder(root->rchild);
//	cout << root->data;
//	if (root != the_root)
//		cout << " ";
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0;i < n;i++)
//	{
//		cin >> a[i];
//	}
//	if (judge(0, n - 1))
//	{
//		cout << "YES" << endl;
//		the_root = create_BST(0, n - 1);
//		postorder(the_root);
//	}
//	else if (judge_rever(0, n - 1))
//	{
//		cout << "YES" << endl;
//		the_root = create_BST_rever(0, n - 1);
//		postorder(the_root);
//	}
//	else
//		cout << "NO";
//	return 0;
//}