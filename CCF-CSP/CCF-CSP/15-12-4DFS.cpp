//#include<iostream>
//#include<stack>
//#include<vector>
//#include <algorithm>
//#pragma warning(disable:4996)
//using namespace std;
//vector<int>graph[10005], path;//ͼ��ŷ��·��
//int N, M;
//bool visit[10005][10005];//��ʾ���Ƿ��ѱ�����
//bool f(vector<int>& v) {//����v�Ķ����Ƿ�Ϊ����
//    return v.size() % 2 == 1;
//}
//void DFS(int v) {//������ȱ���
//    for (int i = 0;i < graph[v].size();++i) {//�����õ��ܵ���Ľ��
//        int w = graph[v][i];
//        if (!visit[v][w]) {//�ñ�û�б����ʹ�
//            visit[v][w] = visit[w][v] = true;//�ñ��ѱ�����
//            DFS(w);//�ݹ����
//        }
//    }
//    path.push_back(v);//����ŷ��·����
//}
//int main() {
//    scanf("%d%d", &N, &M);
//    for (int i = 0;i < M;++i) {//��ȡ���ݣ�ע������ͼΪ����ͼ
//        int a, b;
//        scanf("%d%d", &a, &b);
//        graph[a].push_back(b);
//        graph[b].push_back(a);
//    }
//    for (int i = 1;i <= N;++i)//����
//        sort(graph[i].begin(), graph[i].end());
//    int k = count_if(graph + 1, graph + N + 1, f);//����Ϊ�����Ķ������
//    if (k == 0 || (k == 2 && f(graph[1]))) {
//        DFS(1);
//        if (path.size() == M + 1) {
//            for (int i = path.size() - 1;i >= 0;--i)
//                printf("%d ", path[i]);
//        }
//        else {
//            printf("-1");
//        }
//    }
//    else
//        printf("-1");
//    return 0;
//}