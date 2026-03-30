#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(N), C(M,0), D(M,0);
  for (int i = 0; i < N; i++){
    cin >> A.at(i) >> B.at(i);
  }
  for (int i = 0; i < N; i++){
    C.at(A.at(i)-1)++;
    D.at(B.at(i)-1)++;
  }
  for (int i = 0; i < M; i++){
    cout << D.at(i) - C.at(i) << endl;
  }
}
