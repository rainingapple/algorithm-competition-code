/*#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
const int MaxV = 505;
const int INF = 100000000;
int G[MaxV][MaxV];
int d[MaxV];
int a[MaxV];
vector<int> p[MaxV];
vector<vector<int>> path;
vector<int> temp_path;
vector<int> fin_path;
bool vis[MaxV];
int c, n, sp, m;
int in_max=INF, out_max=INF;
void Dijkstra(int u) {
	fill(d, d + MaxV, INF);
	fill(vis, vis + MaxV, false);
	for (int i = 0;i < n;i++) {
		if (G[u][i] != INF) {
			d[i] = G[u][i];
			p[i].push_back(u);
		}
	}
	vis[u] = true;
	for (int i = 0;i < n;i++) {
		int min = INF, v = -1;
		for (int j = 0;j < n;j++) {
			if (vis[j] == false && d[j] < min) {
				min = d[j];
				v = j;
			}
		}
		if (v == -1)
			return;
		vis[v] = true;
		for (int j = 0;j < n;j++) {
			if (vis[j] == false) {
				if (G[v][j] + d[v] < d[j]) {
					d[j] = G[v][j] + d[v];
					p[j].clear();
					p[j].push_back(v);
				}
				else if (G[v][j] + d[v] == d[j]) {
					p[j].push_back(v);
				}
			}
		}
	}
}
void compute(int u) {
	temp_path.push_back(u);
	if (p[u].empty()) {
		path.push_back(temp_path);
	}
	for (int i = 0;i < p[u].size();i++) {
		compute(p[u][i]);
	}
	temp_path.pop_back();
}
void select() {
	int mark = c / 2;
	for (int i = 0;i < path.size();i++) {
		int fin_in = 0;
		int fin_out = 0;
		for (fin_in = 0;;fin_in++) {
			fin_out = fin_in;
			for (int j = path[i].size() - 2;j >= 0;j--) {
				fin_out -= mark - a[path[i][j]];
				if (fin_out < 0)
					break;
			}
			if (fin_out >= 0)
				break;
		}
		if (fin_in < in_max) {
			fin_path = path[i];
			in_max = fin_in;
			out_max = fin_out;
		}
		else if (fin_in == in_max) {
			if (fin_out < out_max) {
				fin_path = path[i];
				in_max = fin_in;
				out_max = fin_out;
			}
		}
	}
}
int main() {
	cin >> c >> n >> sp >> m;
	for (int i = 0;i < n;i++) {
		cin >> a[i+1];
	}
	n++;
	fill(G[0], G[0] + MaxV*MaxV, INF);
	for (int i = 0;i < m;i++) {
		int u, v, cost;
		cin >> u >> v >> cost;
		G[u][v] = cost;
		G[v][u] = cost;
	}
	Dijkstra(0);
	compute(sp);
	select();
	cout << in_max << " ";
	for (int i = fin_path.size() - 1;i >= 0;i--) {
		cout << fin_path[i];
		if (i != 0) {
			cout << "->";
		}
	}
	cout << " " << out_max;
	return 0;
}*/