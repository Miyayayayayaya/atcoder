#include <bits/stdc++.h>
using namespace std;
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}

const long long INF = 1LL << 60;
long long dp[100100];

long long rec(int i)
{
    if (i == 0)
        return 0;
    if (dp[i] < INF)
        return dp[i];
    long long res = INF;
    chmin(res, rec(i - 1) + 1);
    int x = 6;
    while (x <= i)
    {
        chmin(res, rec(i - x) + 1);
        x *= 6;
    }
    x = 9;
    while (x <= i)
    {
        chmin(res, rec(i - x) + 1);
        x *= 9;
    }
    return dp[i] = res;
}

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i <= N; ++i)
    {
        dp[i] = INF;
    }
    dp[0] = 0;
    cout << rec(N) << endl;
}