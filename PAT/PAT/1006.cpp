//ע��if����ʽд���ǻ������ģ���Ϊ��ֻ�ǰѵ�һ�仰���ɱ�if���ƣ��������û�С�
//��ѧϰ����һ�ֿ���д���� scanf("%d:%d:%d",&p.h,&p.m,&p.s)���������ַ����ָ����ˡ�
//����ҲҪ���ҵĿ�
/*bool operator <(const Person& p)const {//����С�������
	if (this->h != p.h)
		return this->h < p.h;
	else if (this->m != p.m)
		return this->m < p.m;
	else
		return this->s < p.s;
}*/
//minstd��ĵ��ã�minTime = min(minTime, p);

/*#include<iostream>
#include <string>
using namespace std;
int cal(string time)
{
	int hour, min, sec;
	int mark1, mark2;
	mark1 = time.find(":");
	hour = std::stoi(time.substr(0, mark1));
	string tmp = time.substr(mark1 + 1, time.size() - mark1 - 1);
	mark2 = tmp.find(":");
	min = std::stoi(tmp.substr(0, mark2));
	sec = std::stoi(tmp.substr(mark2 + 1, tmp.size() - mark2 - 1));
	return hour * 3600 + min * 60 + sec;
}
int main()
{
	int n;
	cin >> n;
	string id_first="", id_last="";
	string id, in_time, out_time;
	int time_first=25*3600, time_last=-1;
	for (int i = 0;i < n;i++)
	{
		cin >> id >> in_time >> out_time;
		if (cal(in_time) < time_first)
		{
			id_first = id;
			time_first = cal(in_time);
		}
		if (cal(out_time) > time_last)
		{
			id_last = id;
			time_last = cal(out_time);
		}
	}
	cout << id_first << ' ' << id_last;
	return 0;
}*/