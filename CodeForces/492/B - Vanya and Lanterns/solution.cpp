#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
 
#define pb push_back
#define mp make_pair
#define fi first
#define se second
 
int main()
{
    ll n, l;
    cin >> n >> l;
    vll locations(n);
 
    for (int i = 0; i < n; i++)
        cin >> locations[i];
 
    sort(locations.begin(), locations.end());
 
    double d_start_or_end = 0, d_between = 0;
    d_start_or_end = max((double)locations[0], (double)(l - locations[n - 1]));
 
    for (int i = 1; i < n; i++)
    {
        if (locations[i] - locations[i - 1] > d_between)
            d_between = locations[i] - locations[i - 1];
    }
    printf("%.10lf", max(d_start_or_end, d_between / 2.0));
 
    return 0;
}