////�����������ң����г�ʱ������Ϊ���룬������Ϊ����������ʱ����ѭ��
////����Խ�����⣬���԰ѱ߽��ʼ��Ϊ��һ���߽������������ñ߽���Ϊ1
////������ڵ���д��ʱ�����ӷǳ����ң�����ͷ����д��80���ӵ���80��
////�Ǹ��½��Ĺ��̣����Ƶ�Чʵ���Ͽ�������������£������ʵ����
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
//	//ȷ������Ư�ƾ��� 
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
//	//ʵ�ʸ������� 
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
//	//���
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