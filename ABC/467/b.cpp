#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main()
{
    int N;
    int change = 0;
    int A, B;
    string S;
    cin >> N;
    rep(i, 0, N)
    {
        cin >> A >> B >> S;
        if (S == "keep")
        {
            change += B - A;
        }
    }
    cout << change << endl;
    return 0;
}