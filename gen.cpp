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

mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());

template <class T>
inline T ri(T l, T r) {
  assert(l <= r);
  return uniform_int_distribution<T>(l, r)(rng);
}

template <class T>
vector<T> sample(T l, T r, int k) {
  T n = r - l + 1;
  assert(n >= k);
  if (n >= 2 * k) {
    unordered_set<T> a;
    while (len(a) < k) a.insert(ri(l, r));
    return {all(a)};
  } else {
    vector<T> a(n);
    iota(all(a), l);
    shuffle(all(a), rng);
    a.resize(k);
    return a;
  }
}

int main(int argc, char **argv) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin.exceptions(ios::failbit);
}
