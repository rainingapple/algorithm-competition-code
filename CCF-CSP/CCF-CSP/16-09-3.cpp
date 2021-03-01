//60分钟完全写完，70分钟完成检错，80分钟完成自制极限条件测试，一次满分
/*
#include<iostream>
#include <string>
#include<sstream>
using namespace std;
struct guai
{
	int attack=0;
	int health=0;
};
struct player
{
	int health=0;
	int attack = 0;
	struct guai g[8];
};
int now = 0;
bool is_end = false;
int winner = 3;
player py[2];
void endgame()
{
	if (is_end == true)
	{
		if (winner == 0)
			cout << 1 << endl;
		else if (winner == 1)
			cout << -1 << endl;
	}
	else
		cout << 0 << endl;
	cout << py[0].health << endl;
	int sum1 = 0;
	for (int i = 1;i <= 7;i++)
	{
		if (py[0].g[i].health != 0)
		{
			sum1++;
		}
	}
	cout << sum1 << " ";
	for (int i = 1;i <= sum1;i++)
	{
		if (py[0].g[i].health != 0)
		{
			cout << py[0].g[i].health << " ";
		}
	}
	cout << endl;
	cout << py[1].health << endl;
	int sum2 = 0;
	for (int i = 1;i <= 7;i++)
	{
		if (py[1].g[i].health != 0)
		{
			sum2++;
		}
	}
	cout << sum2 << " ";
	for (int i = 1;i <= sum2;i++)
	{
		if (py[1].g[i].health != 0)
		{
			cout << py[1].g[i].health << " ";
		}
	}
	cout << endl;
}
void summon(int p,int a,int h)
{
	if (p != 7)
	{
		for (int i = 7;i >p;i--)
		{
			py[now].g[i].attack = py[now].g[i - 1].attack;
			py[now].g[i].health = py[now].g[i - 1].health;
		}
	}
	py[now].g[p].attack = a;
	py[now].g[p].health = h;
}
void death(int wh,int pos)
{
	for (int i = pos;i < 7;i++)
	{
		py[wh].g[i].attack = py[wh].g[i+1].attack;
		py[wh].g[i].health = py[wh].g[i+1].health;
	}
	py[wh].g[7].attack = 0;
	py[wh].g[7].health = 0;
}
void attack(int a,int d)
{
	if (d == 0)
	{
		py[1 - now].health = py[1 - now].health - py[now].g[a].attack;
		if (py[1 - now].health <= 0)
		{
			is_end = true;
			winner = now;
			endgame();
		}
	}
	else
	{
		int a0, h0, a1, h1;
		a0 = py[now].g[a].attack;
		h0 = py[now].g[a].health;
		a1 = py[1 - now].g[d].attack;
		h1 = py[1 - now].g[d].health;
		py[now].g[a].health = h0 - a1;
		py[1 - now].g[d].health = h1 - a0;
		if (py[now].g[a].health <= 0)
		{
			death(now, a);
		}
		if (py[1 - now].g[d].health <= 0)
		{
			death(1 - now, d);
		}
	}
}
void end()
{
	if (now == 1)
		now = 0;
	else
		now = 1;
}
int main()
{
	int n;
	cin >> n;
	string bis;
	getline(cin, bis);
	py[0].health = 30;
	py[1].health = 30;
	for (int i = 0;i < n;i++)
	{
		if (is_end == true)
			break;
		string s;
		getline(cin, s);
		stringstream ss(s);
		string mode;
		ss >> mode;
		if (mode == "summon")
		{
			int a, b, c;
			ss >> a >> b >> c;
			summon(a, b, c);
		}
		else if (mode == "attack")
		{
			int a, b;
			ss >> a >> b;
			attack(a, b);
		}
		else
		{
			end();
		}
	}
	if (is_end == false)
	{
		endgame();
	}
	return 0;
}*/