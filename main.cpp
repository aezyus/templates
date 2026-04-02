#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using vi  = vector<int>;
using pii = pair<int,int>;

#define pb push_back
#define mp make_pair
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second

// Loop macros
#define rep(i,a,b) for(int i=(a); i<(b); i++)
#define rrep(i,a,b) for(int i=(a); i>=(b); i--)

// Toggles
#define Multitests   // comment for single test
// #define LOCAL     // uncomment for debug

template<class T>
ostream& operator<<(ostream& os, const vector<T>& v) {
  for (const auto &x : v) os << x << ' ';
  return os;
}

#define m1(x) template<class T, class... U> inline void x(T&& a, U&&... b)
#define m2(x) (void)initializer_list<int>{((x std::forward<U>(b)),0)...}
m1(pr) { cout << std::forward<T>(a); m2(cout << ' ' <<); cout << '\n'; }
m1(re) { cin  >> std::forward<T>(a); m2(cin  >>); }

#ifdef LOCAL
m1(db) { cerr << std::forward<T>(a); m2(cerr << ' ' <<); cerr << '\n'; }
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "] = ", db(__VA_ARGS__)

template<class T>
void dbg_vec(const vector<T>& v){
  cerr << "[ ";
  for(auto &x: v) cerr << x << " ";
  cerr << "]\n";
}
#else
#define dbg(...)
#endif

void setIO(string name = "") {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  if (!name.empty()) {
    freopen((name + ".in").c_str(), "r", stdin);
    freopen((name + ".out").c_str(), "w", stdout);
  }
}

void solve() {
  
}

int main() {
  setIO();

#ifdef Multitests
  int T; cin >> T;
  while (T--) solve();
#else
  solve();
#endif

  return 0;
}
