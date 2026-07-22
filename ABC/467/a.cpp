#include <bits/stdc++.h>
using namespace std;
int main()
{
    int H, W;
    cin >> H >> W;
    if (10000 * W >= 25 * H * H)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}