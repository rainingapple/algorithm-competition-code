////这道题告诉了我，运行超时不是因为代码，而是因为在特殊输入时的死循环
////对于越界问题，可以把边界初始化为另一个边界条件，比如让边界置为1
////这个题在当初写的时候脑子非常混乱，理不清头绪，写了80分钟得了80分
////那个下降的过程，看似等效实际上可以利用最大往下，差距其实不大
//#include<iostream>
//#include<string>
//#include<sstream>
//using namespace std;
//int main() {
//	int a[16][10];
//	for (int i = 0;i < 15;i++)
//	{
//		for (int j = 0;j < 10;j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	for (int j = 0;j < 10;j++)
//	{
//		a[15][j] = 1;
//	}
//	string temp;
//	int data;
//	bool b[4] = { false,false,false,false };
//	int sum[4] = { 0,0,0,0 };
//	int bottom[4] = { 0,0,0,0 };
//	for (int i = 0;i < 4;i++)
//	{
//		for (int j = 0;j < 4;j++)
//		{
//			cin >> data;
//			if (data == 1)
//			{
//				b[j] = true;
//				sum[j]++;
//				bottom[j] = i;
//			}
//		}
//	}
//	int ft=0, ed=3;
//	for (int i = 0;i < 4;i++)
//	{
//		if (b[i] == true)
//		{
//			ft = i;
//			break;
//		}
//	}
//	for (int i = 3;i > -1;i--)
//	{
//		if (b[i] == true)
//		{
//			ed = i;
//			break;
//		}
//	}
//	int col;
//	cin >> col;
//	col = col - 1;
//	//确定极限漂移距离 
//	bool flag = false;
//	while (flag == false)
//	{
//		for (int i = ft;i <= ed;i++)
//		{
//			if (a[bottom[i]][i+col] == 1)
//			{
//				flag = true;
//			}
//		}
//		if (flag == false)
//		{
//			for (int i = ft;i <= ed;i++)
//			{
//				bottom[i]++;
//			}
//		}
//	}
//	//实际更改数组 
//	for (int i = ft;i <= ed;i++)
//	{
//		bottom[i]--;
//	}
//	for (int i = ft;i <= ed;i++)
//	{
//		int mark = sum[i];
//		for(int j = 0;j < mark;j++)
//		{
//			a[bottom[i] - j][col + i] = 1;
//		}
//	}
//	//输出
//	for (int i = 0;i < 15;i++)
//	{
//		for (int j = 0;j < 10;j++)
//		{
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}