/** 	Author: Apoorva Mittal  **/
/**   Published: 04/07/2020 04:34:50 **/
#include <bits/stdc++.h>
using namespace std;
// #define int             long long
//#warning int long long MLE
#define endl "\n"
#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<pair<int, int>>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repd(i, b, a) for (int i = b; i >= a; i--)
#define init(i, k) memset(i, k, sizeof i)
#define pb push_back
#define pii pair<int, int>
#define ff first
#define ss second
#define all(a) a.begin(), a.end()
#define maxe *max_element
#define mine *min_element
#define pow2(n) (1LL << (n))
#define sz(a) (int)a.size()
#define unq(x) x.erase(unique(x.begin(), x.end()), x.end())
//--------------------------------------------debugging showoff---------------------------------------------------------
#define out(a)                             \
  cout << #a << ": " << endl;              \
  rep(i, 0, a.size()) cout << a[i] << " "; \
  cout << endl;
#define out2d(a, w)                   \
  cout << #a << ": " << endl;         \
  rep(i, 0, a.size())                 \
  {                                   \
    rep(j, 0, a[0].size())            \
            cout                      \
        << setw(w) << a[i][j] << " "; \
    cout << endl;                     \
  }
#define sim template <class c
#define ris return *this
#define dor > deb &operator<<
#define eni(x)                                                                \
  sim > typename enable_if<sizeof dud<c>(0) x 1, deb &>::type operator<<(c i) \
  {
sim > struct rge
{
  c b, e;
};
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c *x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct deb
{
#ifdef LOCAL
  ~deb()
  {
    cerr << endl;
  }
  eni(!=) cerr << boolalpha << i;
  ris;
} eni(==) ris << range(begin(i), end(i));
}
sim, class b dor(pair<b, c> d)
{
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d)
{
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
  sim dor(const c &)
  {
    ris;
  }
#endif
}
;
#define show(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
// -DLOCAL
//--------------------------------------------useless stuff---------------------------------------------------------------------

#define speed                   \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)
#define flush fflush(stdout);
#define lb lower_bound
#define ub upper_bound
#define precise(x) cout << fixed << showpoint << setprecision(x);
#define total1(x) __builtin_popcountll(x)
#define left1(x) __builtin_clzll(x)  // "63-right1(x)" to find 0 based index of first set bit from left
#define right1(x) __builtin_ctzll(x) // to find 0 based index of first set bit from right
#define gcd(a, b) __gcd(a, b)

template <class T>
T &chmin(T &a, const T &b)
{
  return a = min(a, b);
}
template <class T>
T &chmax(T &a, const T &b) { return a = max(a, b); }
const int dx[8] = {0, 1, -1, 0, 1, 1, -1, -1};
const int dy[8] = {1, 0, 0, -1, 1, -1, -1, 1};
//------------------------------------------------------------------------------------------------------------------------------
const int mod = 1e9 + 7; //1000000007
// ====== Useful functions begin ======
inline int add(int a, int b) { return ((a % mod) + (b % mod)) % mod; }
inline int sub(int a, int b) { return ((a % mod) - (b % mod) + mod) % mod; }
inline int mul(int a, int b) { return ((a % mod) * (b % mod)) % mod; }
// ====== Useful functions end ======
template <typename T>
istream &operator>>(istream &is, vector<T> &vec)
{
  for (auto &v : vec)
    is >> v;
  return is;
}
//--------------------------------------------------------------------------------------------------------------------------------
const double PI = acos(-1.0);
const long long inf = 1e18; //1000000000000000000
const int maxn = 1e3 + 5;
//--------------------------------------------------------------------------------------------------------------------------------

void solve()
{
  int n;
  cin >> n;
  map<int, int> mpx;
  map<int, int> mpy;
  int e = 4*n-1;
  rep(i, 0, e)
  {
    int x, y;
    cin >> x >> y;
    mpx[x]++;
    mpy[y]++;
  }
  int xi=0, yi=0;
  for (auto i : mpx)
  {
    int x = i.ff;
    int cnt = i.ss;
    if (cnt & 1)
      xi = x;
  }
  for (auto i : mpy)
  {
    int y = i.ff;
    int cnt = i.ss;
    if (cnt & 1)
      yi = y;
  }
  cout << xi << " " << yi << endl;
}
signed main()
{
#ifndef ONLINE_JUDGE
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stderr);
#endif // ONLINE_JUDGE

  speed;
  int t = 1;
  cin >> t;

  for (int tt = 1; tt <= t; tt++)
  {
    // cout<<"Case #"<<tt<<": ";
    solve();
  }

  //CERTAIN STUFF to REMEMBER::
  //1.Check integer overflow
  //2.Check edge case n=1 probable <----------  don't take it lightly, if this will be the reason you'll collapse
  //3.If conditions can be checked without bits, then never check with bits, never try to be oversmart!
  //4.WA can come bcz of very silly things ->  base case, if with bits,bla bla
  //5. MLE? -> #define int long long
  //6. When it's getting too complex till C, consider starting afresh, you might be going in a wrong direction
  //7.long long!!
}
