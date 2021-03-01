//#include<iostream>
//#include<stack>
//#include<vector>
//#include <algorithm>
//#pragma warning(disable:4996)
//using namespace std;
//vector<int>graph[10005], path;//图、欧拉路径
//int N, M, num = 0, ans_num;
//bool visit[10005][10005];//表示边是否已被访问
//bool f(vector<int> v) {
//    if (v.size() % 2 == 1)
//        return true;
//}
//void DFS(int u) {
//    stack<int> s;
//    s.push(u);
//    while (!s.empty()) {
//        int top = s.top();
//        int i = 0;
//        for (;i < graph[top].size();i++) {
//            int v = graph[top][i];
//            if (visit[top][v] == false) {
//                visit[top][v] = visit[v][top] = true;
//                s.push(v);
//                break;
//            }
//        }
//        if (i == graph[top].size()) {
//            path.push_back(top);
//            s.pop();
//        }
//    }
//}
//int main() {
//    scanf("%d%d", &N, &M);
//    for (int i = 0;i < M;++i) {//读取数据，注意所给图为无向图
//        int a, b;
//        scanf("%d%d", &a, &b);
//        graph[a].push_back(b);
//        graph[b].push_back(a);
//    }
//    for (int i = 1;i <= N;++i)//排序
//        sort(graph[i].begin(), graph[i].end());
//    DFS(1);
//    int k = count_if(graph + 1, graph + N + 1, f);
//    if (path.size() == M + 1 && (k == 0 || (k == 2 && f(graph[1]))))
//        for (int i = path.size()-1;i >= 0;--i)
//            printf("%d ", path[i]);
//    else
//        printf("-1");
//    return 0;
//}