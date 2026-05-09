#include <iostream>
#include <set>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    // setによる重複の排除
    set<int> S;
    for (int i = 0; i < N; i++)
    {
        int F;
        cin >> F;
        S.insert(F);
    }
    // 三項演算子
    cout << ((int)S.size() == N ? "Yes" : "No") << endl;
    cout << ((int)S.size() == M ? "Yes" : "No") << endl;
}