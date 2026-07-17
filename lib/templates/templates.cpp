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

// template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
// template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//  chmax(a, b) aとbを比較してaが小さければaをbに更新する。更新した場合はtrueを返す
//  chmin(a, b) aとbを比較してaが大きければaをbに更新する。更新した場合はtrueを返す
// class TのTは任意の型を表し、どの型でも対応できるようにしている。Tはテンプレートパラメータと呼ばれる。
//&を変数につけることで参照元の変数も更新される。参照渡しと呼ばれる。

// const long long INF = 1LL << 60;
// constで定数であることを宣言。変数都が違い、値を変更できない。
// long longは64bit整数型。1LLはlong long型の1を表す。<<はビットシフト演算子で、左に60ビットシフトすることで2^60を表す。
// longlongは64bit整数型であるため、それを超える値は扱えない。よって、INFは2^60より大きい値を表すことができる。