#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    string S;
    string result;
    map<char, char> check;
    check['a'] = '2';
    check['b'] = '2';
    check['c'] = '2';
    check['d'] = '3';
    check['e'] = '3';
    check['f'] = '3';
    check['g'] = '4';
    check['h'] = '4';
    check['i'] = '4';
    check['j'] = '5';
    check['k'] = '5';
    check['l'] = '5';
    check['m'] = '6';
    check['n'] = '6';
    check['o'] = '6';
    check['p'] = '7';
    check['q'] = '7';
    check['r'] = '7';
    check['s'] = '7';
    check['t'] = '8';
    check['u'] = '8';
    check['v'] = '8';
    check['w'] = '9';
    check['x'] = '9';
    check['y'] = '9';
    check['z'] = '9';
    for (int i = 0; i < N; i++)
    {
        cin >> S;
        char head = S[0];
        result += check[head];
    }
    cout << result << endl;
}