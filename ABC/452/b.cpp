#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W; cin >> H >> W;
  vector<vector<string>> table(H,vector<string>(W));
  for (int i=0; i<W; i++){
    table.at(0).at(i)="#";
    table.at(H-1).at(i)="#";
  }
  for (int i=1; i<H-1; i++){
    for (int j=0; j<W; j++){
      if(j==0||j==W-1){
        table.at(i).at(j)="#";
      }else{
        table.at(i).at(j)=".";
      }
    }
  }
  for (int i=0; i<H; i++){
    for (int j=0; j<W; j++){
      cout << table.at(i).at(j);
    }
    cout << endl;
  }
}
