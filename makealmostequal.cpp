
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p;
typedef pair<ll,ll> pl;
typedef pair<double,double> pdd;
typedef vector<ll>vl;
typedef vector<int> v;
typedef vector<vector<int> > vv;
typedef vector<vector<ll> > vvl;
typedef vector<vector<pl> > vvpl;
typedef vector<vector<p> > vvp;
typedef vector<pl> vpl;
typedef vector<p> vp;
const ll M = 1e9 + 7;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mkp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define int long long
 
set<int> ans(int a[], int n, int in){
    set<int>s;
    forn(it, n){
        s.insert(a[it]%in);
    }
    // for(auto it : s){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    return s;
}

void solve(){
    int n;
    cin>>n;
    int a[n];
    forn(i, n){
        cin>>a[i];
    }
    int in=2;
    while(1){
        set<int>st=ans(a, n, in);
        if(st.size()==2){
            cout<<in<<endl;
            return;
        }
        in*=2;
        if(in>1e18) break;
    }
}
int32_t main()
{
    fast_cin();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}