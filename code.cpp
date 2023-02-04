#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// Compile with -DLOCAL
#ifdef LOCAL
#include "debug.h"
#include "permutations.cpp"
#else
#define debug(...) 42
#endif

#define nline "\n"
#define all(x) begin(x), end(x)
#define allr(x) rbegin(x), rend(x)
#define int long long int

// Custom hash map for unordered_map
struct custom_hash {
  static uint64_t splitmix64(uint64_t x) {
    x += 0x9e3779b97f4a7c15;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
    x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
    return x ^ (x >> 31);
  }
  size_t operator()(uint64_t x) const {
    static const uint64_t FIXED_RANDOM =
        chrono::steady_clock::now().time_since_epoch().count();
    return splitmix64(x + FIXED_RANDOM);
  }
};
template <typename T1, typename T2> using safe_map = unordered_map<T1, T2, custom_hash>;

// PBDS
// replace less<int> with greater<int> to get a decreasing ordered_set
// replace less with less_equal<int> to also get duplicate elements in the set
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// Operator overloads
template <typename T1, typename T2>  // cin >> pair<T1, T2>
istream& operator>>(istream& istream, pair<T1, T2>& p) {
  return (istream >> p.first >> p.second);
}
template <typename T>  // cin >> vector<T>
istream& operator>>(istream& istream, vector<T>& v) {
  for (auto& it : v)
    cin >> it;
  return istream;
}
template <typename T1, typename T2>  // cout << pair<T1, T2>
ostream& operator<<(ostream& ostream, const pair<T1, T2>& p) {
  return (ostream << p.first << " " << p.second);
}
template <typename T>  // cout << vector<T>
ostream& operator<<(ostream& ostream, const vector<T>& c) {
  for (auto& it : c)
    cout << it << " ";
  return ostream;
}

// Utility functions to print n arguments
template <typename T>
void print(T&& t) {
  cout << t << "\n";
}
template <typename T, typename... Args>
void print(T&& t, Args&&... args) {
  cout << t << " ";
  print(forward<Args>(args)...);
}
constexpr int MOD = 1e9 + 7;
const int N = 1e6 + 1;

void preCompute() {

}

void solve() {
  
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  // cout << setprecision(12) << fixed;
  preCompute();
  int tests = 1;

  cin >> tests;

  for (int tt = 1; tt <= tests; tt++) {
    // cout << "Case #" << tt << ": ";
    solve();
  }
  return 0;
}

