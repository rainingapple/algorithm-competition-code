////首次分析的时候，确定dp解法，不同于一般的哈夫曼编码，这个每一次只能选择相邻的两个。
////石子问题dp，可以使用平行四边形优化，但是这题怎样都可解，不优化1.5秒，优化15ms。
//#include<cstdio>
//#include<cstring>
//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<queue>
//#pragma warning(disable:4996)
//#define ll long long
//using namespace std;
//const int inf = 0x08080808;
//int num[1010], dp[1010][1010], sum[1010];
//int p[1010][1010];
//int main() {
//    int n;
//    scanf("%d", &n);
//    fill(dp[0], dp[0] + 1010 * 1010, inf);
//    for (int i = 1;i <= n;++i)
//        scanf("%d", &num[i]);
//    for (int i = 1;i <= n;i++) {
//        sum[i] = sum[i - 1] + num[i];
//        dp[i][i] = 0;
//        p[i][i] = i;
//    }
//    for (int len = 2;len <= n;len++) {
//        for (int i = 1;i + len - 1 <= n;i++) {
//            int j = i + len - 1;
//            for (int k = i;k <= j;k++) {
//                int temp = dp[i][k] + dp[k+1][j] + sum[j] - sum[i - 1];
//                if (temp < dp[i][j]) {
//                    dp[i][j] = temp;
//                    p[i][j] = k;
//                }
//            }
//        }
//    }
//    cout << dp[1][n];
//    return 0;
//}