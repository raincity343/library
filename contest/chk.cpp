#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define all(x) begin(x), end(x)
#define len(x) int((x).size())

template <class T>
inline bool chmin(T &a, const T &b) {
  if (b < a) {
    a = b;
    return true;
  } else {
    return false;
  }
}

template <class T>
inline bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return true;
  } else {
    return false;
  }
}

ifstream inf, ouf, ans;

int main(int argc, char **argv) {
  ios::sync_with_stdio(false);
  inf.open(argv[1]), ouf.open(argv[2]), ans.open(argv[3]);
  inf.exceptions(ios::failbit);
  ouf.exceptions(ios::failbit);
  ans.exceptions(ios::failbit);
}
