#include <bits/stdc++.h>
using namespace std;

int sumdigit(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x = x / 10;
    }
    return sum;
}

int main()
{
    int N, A, B;
    int count = 0;
    cin >> N >> A >> B;
    for (int i = 1; i < N + 1; i++)
    {
        int sum = sumdigit(i);
        if (A <= sum && B >= sum)
        {
            count += i;
        }
    }
    cout << count << endl;
    return 0;
}