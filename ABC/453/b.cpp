#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, X;
    cin >> T >> X;
    int A, N = 0;
    for (int i = 0; i <= T; i++)
    {
        cin >> A;
        if (N - A >= X || A - N >= X || i == 0)
        {
            cout << i << " " << A << endl;
            N = A;
        }
    }
}