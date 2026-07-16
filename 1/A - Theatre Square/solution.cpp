#include <bits/stdc++.h>
using namespace std;
 
typedef long long           ll;
typedef long double         ld;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
 
 
#define pb             push_back
#define mp             make_pair
#define fi             first
#define se             second
 
 
int main()
{
    ld n, m, a;
    cin >> n >> m >> a;
    ll x = ceil(m/a), y = ceil(n/a);
 
    cout << (ll)x*y;
}