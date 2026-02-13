#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int>h(N);
    for (int i = 0; i < N; i++) cin >> h[i];
    for (int i = 0; i < N; i++){
        if (h[i] > h[0]){
        cout << i + 1 << endl;
        return 0;
        }
    }
    cout << -1 << endl;
}
