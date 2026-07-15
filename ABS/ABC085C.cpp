#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i > b; i--)

int main()
{
    int N, Y;
    cin >> N >> Y;
    int bill[] = {10000, 5000, 1000};
    vector<int> check(3, N);
    check[0] = Y / bill[0];
    if (check[0] == 0)
    {
        check[1] = Y / bill[1];
        if (check[1] == 0)
        {
            check[2] = Y / bill[2];
        }
    }
    rep(i, check[0], -1)
    {
        rep(j, check[1] - i, -1)
        {
            int k = check[2] - i - j;
            if (bill[0] * i + bill[1] * j + bill[2] * k == Y)
            {
                cout << i << ' ' << j << ' ' << k << endl;
                return 0;
            }
        }
    }
    cout << -1 << ' ' << -1 << ' ' << -1 << endl;
}