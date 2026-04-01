#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  int a, b, c;
  bool check=false;
  vector<vector<int>> station(N,vector<int>(N));
  for (int i=0; i<N-1; i++){
    for(int j=i+1; j<N; j++){
      cin >> station.at(i).at(j);
    }
  }
  for (int i=0; i<N; i++){
    for(int j=i+1; j<N; j++){
      for(int k=i+1; k<j; k++){
        a=station.at(i).at(k);
        b=station.at(k).at(j);
        c=station.at(i).at(j);
        if(a+b<c){
          check=true;
        }
      }
    }
  }
  if(check){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
