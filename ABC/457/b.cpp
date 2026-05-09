#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, X, Y;
    cin >> N;
    vector<vector<int>> A(N);
    for (int i = 0; i < N; i++)
    {
        int L;
        cin >> L;
        A[i].resize(L);
        for (int j = 0; j < L; j++)
        {
            cin >> A[i][j];
        }
    }
    cin >> X >> Y;
    cout << A[X - 1][Y - 1] << endl;
}