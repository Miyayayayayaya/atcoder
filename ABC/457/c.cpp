#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    vector<vector<int>> A(N);
    vector<int> L(N);
    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
        A[i].resize(L[i]);
        for (int j = 0; j < L[i]; j++)
        {
            cin >> A[i][j];
        }
    }
    vector<int> C(N);
    for (int i = 0; i < N; i++)
    {
        cin >> C[i];
    }
    for (int i = 0; i < N; i++)
    {
        int total = L[i] * C[i];
        if (K <= total)
        {
            int index = (K - 1) % L[i];
            cout << A[i][index] << endl;
            return 0;
        }
        else
        {
            K -= total;
        }
    }
}