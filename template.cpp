#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
  
#ifndef ONLINE_JUDGE
#define debug(x) cout << "[" << __LINE__ << "] " <<  #x << " = "; _print(x);
#else
#define debug(...) 42
#endif

template <typename T, typename S> void _print(unordered_map<T, S> mp){for(auto i: mp){cout << i.first << " : " << i.second << "\n";}cout << "\n";}
template <typename T, typename S> void _print(map<T, S> mp){ for(auto i: mp){cout << i.first << " : " << i.second << "\n";}cout << "\n";}
template<typename T> void _print(vector<T>& v) {for(T i : v) {cout << i << " ";} cout << "\n";}
template <typename T> istream &operator>> (istream &input, vector<T> &data) {for (auto &item : data) {input >> item;} return input;}
template <typename T> ostream &operator<< (ostream &output, const vector<T> &data) {for (const T &x : data) {output << x << " ";} output << "\n"; return output;}
template <typename T, typename S> ostream& operator<< (ostream& output, const unordered_map<T, S>& v) {for (auto it : v) {output << it.first << ": " << it.second << "\n";} output << "\n"; return output;}
template <typename T, typename S> ostream& operator<< (ostream& output, const map<T, S>& v) {for (auto it : v) {output << it.first << ": " << it.second << "\n";} output << "\n"; return output;}
void _print(long long x) {cout << x << "\n";}
void _print(string x) {cout << x << "\n";}
#define fastIO {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define int long long
#define nline "\n"
#define all(x) x.begin(), x.end()
// replace less<int> with greater to get a decreasing ordered_set
// replace less with less_equal<int> to also get duplicate elements in the set
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update>

const int MOD = 1e9 + 7, maxN = 1e6 + 5, inf = INT_MAX;


void solve()
{
	
}



int32_t main()
{
	fastIO
	int T = 1;

	cin >> T;

	for (int i = 1; i <= T; i++) {
		solve();
	}

	return 0;
}
