/*#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
map<int, int> C_map;
map<int, int> M_map;
map<int, int> E_map;
map<int, double> A_map;
set<int> name_list;
vector<int> C;
vector<int> M;
vector<int> E;
vector<double> A;
bool cmp(int a,int b)
{
	return a > b;
}
int Binary_search(vector<int> vc,int start, int end,int grade)
{
	while (start<=end)
	{
		int mid = (start + end) / 2;
		if (vc[mid] == grade)
			return mid;
		else if (vc[mid] < grade)
		{
			end = mid-1;
		}
		else
		{
			start = mid+1;
		}
	}
}
int Binary_search(vector<double> vc, int start, int end, double grade)
{
	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (vc[mid] == grade)
			return mid;
		else if (vc[mid] < grade)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
}
void fuc1()
{
	sort(C.begin(), C.end(), cmp);
	sort(M.begin(), M.end(), cmp);
	sort(E.begin(), E.end(), cmp);
	sort(A.begin(), A.end(), cmp);
}
int find_min(int a, int b, int c, int d)
{
	if (d <= a && d <= b && d <= c)
		return 4;
	else if (a <= b && a <= c && a <= d)
		return 1;
	else if (b <= a && b <= c && b <= d)
		return 2;
	else if (c <= a && c <= b && c <= d)
		return 3;
}
bool search_order(int no, int& best, string & name)
{
	if (name_list.find(no) == name_list.end())
		return false;
	int C_rank = Binary_search(C, 0, C.size() - 1, C_map[no]) + 1;
	int M_rank = Binary_search(M, 0, M.size() - 1, M_map[no]) + 1;
	int E_rank = Binary_search(E, 0, E.size() - 1, E_map[no]) + 1;
	int A_rank = Binary_search(A, 0, A.size() - 1, A_map[no]) + 1;
	int rank = find_min(C_rank, M_rank, E_rank, A_rank);
	if (rank == 1)
	{
		best = C_rank;
		name = "C";
	}
	else if (rank == 2)
	{
		best = M_rank;
		name = "M";
	}
	else if (rank == 3)
	{
		best = E_rank;
		name = "E";
	}
	else if (rank == 4)
	{
		best = A_rank;
		name = "A";
	}
	return true;
}
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0;i < n;i++)
	{
		int no, c, m, e;
		double a;
		cin >> no >> c >> m >> e;
		a = (c + m + e) / 3;
		name_list.insert(no);
		C_map[no] = c;
		C.push_back(c);
		M_map[no] = m;
		M.push_back(m);
		E_map[no] = e;
		E.push_back(e);
		A_map[no] = a;
		A.push_back(a);
	}
	fuc1();
	for (int i = 0;i < m;i++)
	{
		int temp, best;
		string name;
		cin >> temp;
		if (search_order(temp, best, name))
		{
			cout << best << " " << name << endl;
		}
		else
		{
			cout << "N/A" << endl;
		}
	}
	return 0;
}*/