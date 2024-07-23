
//     卐 🚩ॐ 🚩卐
//          🌎 
//          🌎 
//     卐 🚩ॐ 🚩卐


// "The only way to do great work is to love what you do. If you haven't found it yet, keep looking. Don't settle." ~ 𝓖𝓪𝓾𝓻𝓪𝓿



#include <bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace chrono;
// using namespace __gnu_pbds;

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

// Seed and random number generator
std::mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count());
typedef long long ll;
 typedef unsigned long long ull;
typedef long double lld;
#define mod 1000000007
#define MOD1 998244353
const int  N= 1e6 +5;
const long double epsilon = 1e-9;
const int infm = LLONG_MIN;
#define inf 1e18
#define nline << "\n"
#define pf push_front
#define ppf pop_front
#define pb push_back
#define ppb pop_back
#define eb emplace_back
#define ff first
#define ss second
#define pi 3.141592653589793238462
#define set_bit(x) __builtin_popcountll(x)
#define clz(x) __builtin_clzll(x) // count number of trailing zero in binary representation of unsigned long long int  //  unsigned long long int num = 16; // Binary: 0000000000000000000000000000000000000000000000000000000000010000



string spi = "3141592653589793238462643383279";
// used Given two circles with radii r1 and r2, compare their areas with high precision.

// Convert the string representation of pi to a high precision number if needed
//  long double pi = stold("3." + spi.substr(1)); stold is used to convert string to long double

#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend()

#define fr0(i, a, b) for (ll i = a; i < b; i++)
#define frn(i, a, b) for (ll i = a; i >= b; i--)
#define read(a, n) for0(i, 0, n) cin >> a[i]

#define printi(a, n) for0(i, 0, n) cout << a[i] << " ";

#define yes cout << "YES" \
                 << "\n";
#define no cout << "NO" \
                << "\n";

#define traverse(container, it) \
    for (auto it = container.begin(); it != container.end(); it++)

#define print(a)     \
    for (auto i : a) \
    cout << i << " "

#define vcin(a)       \
    for (auto &i : a) \
    cin >> i

// direction matrix
int dx[8] = {1, -1, 0, 0, 1, -1, 1, -1};
int dy[8] = {0, 0, 1, -1, 1, -1, -1, 1};

typedef pair<ll, ll> pii;
typedef vector<ll>vl;
#define vvl vector<vector<ll>>
#define vvp vector<pair<ll, ll>>
#define mt(a, b, c) make_tuple(a, b, c)
#define pqmx priority_queue<ll>
#define pqmn priority_queue<ll, vll, greater<ll>>
#define vs vector<string>
#define ump unordered_map<ll, ll>

typedef set<ll> st;
typedef map<ll, ll> mp;
typedef map<ll, vl> mpv;
typedef map<char, ll> mpc;
#define stc set<char>
#define stk stack<ll>
#define stkc stack<char>
#define mpsl map<string, ll>
#define mpls map<ll, string>
#define in insert
#define prec(x) cout << fixed << setprecision(x)
#define n_digit(n) (int)log10(n) + 1
#define msb(n) (int)(log2(n)) + 1



// typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order(it return an iterator input is a value), order_of_key(input is index)

// define policy based data structure

// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

// typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> ordered_set; 


// typedef tree<long long, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

// class DisjointSet {
//     vector<int> rank, parent, size; 
// public: 
//     DisjointSet(int n) {
//         rank.resize(n+1, 0); 
//         parent.resize(n+1);
//         size.resize(n+1); 
//         for(int i = 0;i<=n;i++) {
//             parent[i] = i; 
//             size[i] = 1; 
//         }
//     }

//     int findUPar(int node) {
//         if(node == parent[node])
//             return node; 
//         return parent[node] = findUPar(parent[node]); 
//     }

//     void unionByRank(int u, int v) {
//         int ulp_u = findUPar(u); 
//         int ulp_v = findUPar(v); 
//         if(ulp_u == ulp_v) return; 
//         if(rank[ulp_u] < rank[ulp_v]) {
//             parent[ulp_u] = ulp_v; 
//         }
//         else if(rank[ulp_v] < rank[ulp_u]) {
//             parent[ulp_v] = ulp_u; 
//         }
//         else {
//             parent[ulp_v] = ulp_u; 
//             rank[ulp_u]++; 
//         }
//     }

//     void unionBySize(int u, int v) {
//         int ulp_u = findUPar(u); 
//         int ulp_v = findUPar(v); 
//         if(ulp_u == ulp_v) return; 
//         if(size[ulp_u] < size[ulp_v]) {
//             parent[ulp_u] = ulp_v; 
//             size[ulp_v] += size[ulp_u]; 
//         }
//         else {
//             parent[ulp_v] = ulp_u;
//             size[ulp_u] += size[ulp_v]; 
//         }
//     }
// };

vector<ll> fact(N + 1);
vector<ll> invfact(N+ 1);

bool isPrime(ll n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to square root of n
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}


void PrimeFactors(ll n, vector<pair<ll, ll>> &v)
{
    for (int i = 2; (i * i) <= n; i++)
    {
        if (n % i != 0)
            continue;
        ll cnt = 0;
        while (n % i == 0)
        {
            n /= i;
            ++cnt;
        }
        v.push_back({i, cnt});
    }

    if (n != 1)
    v.push_back({n, 1});
  
}


vector<ll> sieve(int n)
{

    vl arr(n + 1, 1);

    vl prime;

    arr[0] = arr[1] = 0;

    for (ll i = 2; i * i <= n; i++)
    {
        if (arr[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
                arr[j] = 0;
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 1)
        {
            prime.push_back(i);
        }
    }

    return prime;
}

ll expo(ll a, ll b, ll m)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b = b >> 1;
    }
    return res;
}

ll minvprime(ll a, ll m)
{ // for prime m
    return expo(a, m - 2, m);
}

void extendgcd(ll a, ll b, ll *v)
{
    // pass an arry of size1 3
    if (b == 0)
    {
        v[0] = 1;
        v[1] = 0;
        v[2] = a;
        return;
    }

    extendgcd(b, a % b, v);
    ll x = v[1];
    v[1] = v[0] - v[1] * (a / b);
    v[0] = x;
    return;
}

ll mminv(ll a, ll m)
{ // for non prime m
    ll arr[3];
    extendgcd(a, m, arr);
    return arr[0];
}



void factorial()
{
    fact[0] = 1;

    for (ll i = 1; i <= N; ++i)
    {
        fact[i] = fact[i - 1] * i;
        fact[i] %= mod;
    }
}

void inversefactorial()
{

    for (ll i = 0; i <= N; ++i)
    {
        invfact[i] = minvprime(fact[i], mod);
    }
}

ll combination(ll n, ll r, ll m)
{
    ll val1 = fact[n];
    ll val2 = invfact[n - r];
    ll val3 = invfact[r];
    return (((val1 * val2) % m) * val3) % m;
}

bool revsort(ll a, ll b)
{
    return a > b;
}

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}

ll phin(ll n)
{ // time complexity = O(sqrt(n))
    ll number = n;
    if (n % 2 == 0)
    { // return number of integrs less than n and coprime with n ie gcd(k,n)=1 1<=k<=n                // euleer totient function
        number /= 2;
        while (n % 2 == 0)
            n /= 2;
    }

    for (ll i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            number = (number / i * (i - 1));
        }
    }

    if (n > 1)
        number = (number / n * (n - 1));

    return number;
}

ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}

ll mod_div(ll a, ll b, ll m)
{ // only for prime m
    a = a % m;
    b = b % m;
    return (mod_mul(a, minvprime(b, m), m) + m) % m;
}

ll lcm(ll a, ll b)
{

    return (a / __gcd(a, b)) * b;
}

ll getRandomNumber(ll l, ll r)
{
    return uniform_int_distribution<ll>(l, r)(rng);
}


// void bfs(int source)
// {
//     queue < int > q;
//     q.push(source);
//     vis[source] = 1;

//     while (!q.empty())
//     {
//         int curr_v = q.front();
//         q.pop();

//         for(int child : g[curr_v]){

//             if(!vis[child]){

//                 q.push(child);
//                 vis[child] = 1;
//                 level[child] = level[curr_v]+1;

//             }
//         }
//     } 
// }

// void dfs(int vertex)
// {
   
//     vis[vertex] = true;
    
//     for(int child : g[vertex])
//     {
        

//         if(vis[child]) continue;

//         dfs(child);
       
//     }
  
// }


ll derangement(ll n){

    ll ans=0;

    for(int i=0;i<=n;i++){

        if(i&1)
       ans-=invfact[i];
        else
        ans+=invfact[i];

        ans=(ans+mod)%mod;
    }

    return (ans*fact[n])%mod;
}

void gaurav()
{
       
   
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);  //   cin.tie(NULL);
    cout.tie(0); //  cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        gaurav();
    }

    return 0;
}