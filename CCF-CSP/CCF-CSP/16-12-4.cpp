////�״η�����ʱ��ȷ��dp�ⷨ����ͬ��һ��Ĺ��������룬���ÿһ��ֻ��ѡ�����ڵ�������
////ʯ������dp������ʹ��ƽ���ı����Ż������������������ɽ⣬���Ż�1.5�룬�Ż�15ms��
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