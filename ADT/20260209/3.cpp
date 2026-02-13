#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string>S(N), T(N);
    for (int i = 0; i < N; i++) cin >> S[i] >> T[i];
    bool get_nickname = true;
    for (int i = 0; i < N; i++){
        bool check_s = true;
        for (int j = 0; j < N; j++){
            if (j == i) continue;
            if (S[j] == S[i] || T[j] == S[i]) check_s = false;
        }
        bool check_t = true;
        for (int j = 0; j < N; j++){
            if (j == i) continue;
            if (T[j] == T[i] || T[j] == S[i]) check_t = false;
        }
        if (!check_s && !check_t) get_nickname = false;
    }
    if (get_nickname) cout << "YES" << endl;
    else cout << "NO" << endl;
}
