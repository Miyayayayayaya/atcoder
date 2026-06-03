#include <iostream>
#include <string>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    if (H == 1 || W == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    int ans = H * W / 2;
    if (H * W % 2 == 1)
        ans++;
    cout << ans << endl;
}