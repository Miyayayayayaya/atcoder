#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;
    string answer;
    bool check = false;
    for (char w : S)
    {
        if (w != 'o')
        {
            check = true;
        }
        if (check)
        {
            answer += w;
        }
    }
    cout << answer << endl;
}