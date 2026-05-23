#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;
    int q_index, q_number;
    vector<int> block(N, 0);
    for (int i = 0; i < Q; i++)
    {
        cin >> q_index >> q_number;
        if (q_index == 1)
        {
            block[q_number - 1]++;
            bool check = true;
            for (int j = 0; j < N; j++)
            {
                if (block[j] == 0)
                {
                    check = false;
                }
            }
            if (check)
            {
                for (int j = 0; j < N; j++)
                {
                    block[j]--;
                }
            }
        }
        else
        {
            int count = 0;
            for (int j = 0; j < N; j++)
            {
                if (block[j] >= q_number)
                {
                    count++;
                }
            }
            cout << count << endl;
        }
    }
}