#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main()
{
    int A[202000];
    int B[202000];
    int N, M;
    cin >> N >> M;
    int ans = 0;
    rep(i, 0, N) cin >> A[i];
    rep(i, 0, N - 1) cin >> B[i];
    rep(i, 0, N - 1)
    {
        bool check1 = true;
        bool check2 = true;
        if ((A[i] + A[i + 1]) % 2 != B[i])
        {
            check1 = false;
        }
        if (i < N - 1 && ((A[i + 1] + A[i + 2]) % 2 != B[i + 1]))
        {
            check2 = false;
        }
        if (check1 && check2)
        {
            continue;
        }
        else if (!check1 && check2)
        {
            A[i + 1] += 1;
            ans += 1;
        }
        else if (!check1 && !check2)
        {
            A[i + 1] += 1;
            ans += 1;
        }
    };
    cout << ans << endl;
}