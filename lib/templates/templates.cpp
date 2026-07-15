#include <bits/stdc++.h>
using namespace std;
int main() {}

// vector<int> h(i)S
// vevtor<string> h(i)
// cin >> h[i]

// 範囲for文。配列hの要素を直接取り出して指定できる。文量を減らせる
// for (const auto &num : h)
// cout << num << endl;

// vector<int>::iterator
// itrBegin = h.begin(); 先頭要素を示すイテレータを取得
// itrEnd = h.end(); 末尾要素の次を示すイテレータを取得
// ++itrBegin; 先頭要素を示すイテレータを1つ進める
// --itrEnd; 末尾要素を示すイテレータを1つ戻す
// #define rep(i, a, b) for (int i = a; i < b; ++i)
// rep(カウンタ変数,初期値,条件(未満))
// sort(並び替えたい範囲の先頭, 並び替えたい範囲の末尾（の次）, 並び替えのルール)
// sort(A, A + N, greater<int>()); Aはlist Nが要素数 greater<int>()は降順に並び替える
// 並び替えのルール-->greater<int>() で降順、less<int>() で昇順