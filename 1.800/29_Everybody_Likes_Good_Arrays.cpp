#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<ll,ll> pll;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef vector<vll> vvll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll,ll> umll;
template<class T> using pq = priority_queue<T, vector<T>, greater<T>>;
/*template <typename num_t>
using ordered_set = tree<num_t, null_type, less<num_t>, rb_tree_tag, tree_order_statistics_node_update>;*/
// find_by_order(k): iterator to the kth largest(0 indexed). order_of_key(k): no. of items < k

#define GET_MACRO(_1,_2,_3,_4,NAME,...) NAME
#define FOR3(i,a,b) for(long long i=a;i<b;i++)
#define FOR4(i,a,b,step) for(long long i=a;i<b;i=i+step)
#define REV3(i,a,b) for(long long i=a;i>=b;i--)
#define REV4(i,a,b,step) for(long long i=a;i>=b;i=i-step)
#define FOR(...) GET_MACRO(__VA_ARGS__, FOR4, FOR3)(__VA_ARGS__)
#define REV(...) GET_MACRO(__VA_ARGS__, REV4, REV3)(__VA_ARGS__)
#define F first
#define S second
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define tc ll tests;cin>>tests;while(tests--)
#define io ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define coutv(v) for(auto it: (v))cout<<it<<" ";newl;
#define cout2d(v) for(auto it: (v)) {for(auto j:it) cout<<j<<" ";newl;}
#define cinv(v,n) vll (v)(n);FOR(i,0,(n)){cin>>v[i];}
#define cinvg(v,n) (v).resize(n);FOR(i,0,(n)){cin>>v[i];}
#define cin2d(v,n,m) vvll (v)(n,vll(m,0));FOR(i,0,n){FOR(j,0,m){cin>>v[i][j];}}
#define cin2dg(v,n,m) (v).resize(n,vll(m));FOR(i,0,n){FOR(j,0,m){cin>>v[i][j];}}
#define pyes(CONDITION) cout << (CONDITION ? "YES" : "NO") << '\n';
#define newl cout<<"\n"
#define sp " "
#define MOD 1000000007
#define INF LLONG_MAX/2
#define m1(x) template<class T, class... U> void x(T&& a, U&&... b)
#define m2(x) (int[]){(x forward<U>(b),0)...}
m1(pr) { cout << forward<T>(a);  m2(cout << " " <<); cout << "\n"; } 
m1(re) { cin >> forward<T>(a); m2(cin >>); }
template <class ...Args>
auto &readd(Args &...args) { return (cin >> ... >> args); }
#define re(...) __VA_ARGS__; readd(__VA_ARGS__)

const ll dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};
// const ll dx[8] = {-2,-1,1,2,2,1,-1,-2}, dy[8] = {1,2,2,1,-1,-2,-2,-1}; //knight moves

// ************************DEBUG START********************************
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
// ************************DEBUG END**********************************

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


void test(){
	int n;
	cin>>n;

	cinv(arr , n);

	int ops = 0;
	for(int i=1; i<n; i++){
		if((arr[i-1]%2==1 && arr[i]%2==1) || (arr[i-1]%2==0 && arr[i]%2==0)){
			ops++;
		}
	}

	cout<<ops<<endl;
}

int main(){
    io;
    ll tests=1;
    cin>>tests;
    while(tests--){
    	test();
    }
    return 0;
}

