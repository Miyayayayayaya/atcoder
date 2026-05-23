#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X;
    cin >> X;
    string word = "HelloWorld";
    string result;
    for (int i = 0; i < 10; i++)
    {
        if (i + 1 != X)
        {
            result += word[i];
        }
    }
    cout << result << endl;
}