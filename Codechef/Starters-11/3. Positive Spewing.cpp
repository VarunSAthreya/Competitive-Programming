#include<bits/stdc++.h>

using namespace std;
using namespace std::chrono;

// Template Start
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD             1000000007
#define MOD1            998244353
#define INF             1e18
#define nline           "\n"
#define pb              push_back
#define ppb             pop_back
#define mp              make_pair
#define ff              first
#define ss              second
#define PI              3.141592653589793238462
#define set_bits        __builtin_popcountll
#define pii             pair<int,int>
#define vi              vector<int>
#define vll             vector<long long>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define FOR(i,n)		for(int i =0;i<n;i++)
#define FORR(i,n)		for(int i =n-1;i>=0;i--)

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// Template end


void solve() {
	ll n, k;
	cin >> n >> k;
	vll arr(n);
	bool isZero = true;
	ll sum = 0;
	FOR(i, n) {
		cin >> arr[i];
		if (arr[i] > 0) {
			isZero = false;
			sum += arr[i];
		}
	}
	if (isZero) {
		cout << 0 << endl;
		return;
	}
	if (k == 0) {
		cout << sum << endl;
		return;
	}
	set<ll> pos;
	set<ll, greater<ll>> posG;
	FOR(i, n) {
		if (arr[i] > 0) {
			pos.insert(i);
			posG.insert(i);
			pos.insert(i + n);
			posG.insert(i + n);
		}
	}
	vll ans(n, k);
	FOR(i, n) {
		if (arr[i] == 0) {
			ll val1 = *pos.lower_bound(i);
			ll val2 = *posG.lower_bound(i + n);
			ll dist = min(abs(val1 - i), abs(val2 - (i + n)));
			ans[i] -= dist;
		}
	}
	for (auto &x : ans) {
		if (x < 0) {
			x = 0;
		}
	}
	ll res = sum;
	for (auto x : ans) {
		res += 2LL * x;
	}
	cout << res << endl;

}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	auto start = high_resolution_clock::now();
#endif

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

#ifndef ONLINE_JUDGE
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<milliseconds>(stop - start);
	cerr << "Time taken by function: "
	     << duration.count()  << " milliseconds" << endl;
#endif

	return 0;
}