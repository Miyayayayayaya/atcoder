#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int A[200];
    int count = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    while (true)
    {
        bool check = true;
        for (int i = 0; i < N; i++)
        {
            if (A[i] % 2 == 1)
                check = false;
        }
        if (!check)
            break;
        for (int i = 0; i < N; i++)
        {
            A[i] = A[i] / 2;
        }
        ++count;
    }
    cout << count << endl;
    return 0;
}