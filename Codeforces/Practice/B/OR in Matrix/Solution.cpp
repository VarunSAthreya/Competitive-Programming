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
#define mii             map<int,int>
#define umii            unordered_map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define FOR(i,n)        for(int i =0; i<n;i++)

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
	int n, m;
	int a[110][110];
	int b[110][110];

	cin >> n >> m;
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> b[i][j];
			a[i][j] = 1;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (b[i][j] == 0) {
				a[i][j] = 0;
			}
			else {
				int flag = 1;
				for (int k = 1; k <= n; k++) {
					if (b[k][j] == 0) {
						flag = 0;
						break;
					}
				}
				for (int s = 1; s <= m; s++) {
					if (b[i][s] == 0) {
						flag = 0;
						break;
					}
				}
				if (flag)    a[i][j] = 1;
				else a[i][j] = 0;
			}
		}
	}
	bool yes = true;
	for (int i = 1; i <= n && yes; i++) {
		for (int j = 1; j <= m && yes; j++) {
			if (b[i][j]) {
				int f = 0;
				for (int k = 1; k <= m; k++)
					f |= a[i][k];
				for (int k = 1; k <= n; k++)
					f |= a[k][j];
				if (!f) {
					cout << "NO\n";
					yes = false;
					break;
				}
			}
		}
	}
	if (yes) {
		cout << "YES\n";
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j < m; j++) {
				cout << a[i][j] << " ";
			}
			cout <<  a[i][m] << nline;
		}
	}
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	auto start = high_resolution_clock::now();
#endif

	int t = 1;
	// cin >> t;
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