#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int N;
    cin >> N;
    int A[N];
    int ans = 1;
    int index = 0;
    rep(i, 0, N) cin >> A[i];
    sort(A, A + N, greater<int>());
    rep(i, 1, N)
    {
        if (A[i] < A[index])
        {
            ++ans;
            index = i;
        }
    }
    cout << ans << endl;
    return 0;
}