#include <bits/stdc++.h>
using namespace std;
 
typedef long long           ll;
typedef long double         ld;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
typedef vector<int>         vi;
typedef vector<ll>          vll;
typedef vector<pii>         vpii;
 
#define pb             push_back
#define mp             make_pair
#define fi             first
#define se             second
 
 
int main()
{
    ll t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll n;
        cin >> n;
        if (n == 2)
        {
            cout << -1 << endl;
            continue;
        }
        else if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        else
        {
            vector<ll> ans = {2, 4};
            ll ac = 6;
            for (ll i = 2; i < n; i++)
            {
                ans.push_back(ac);
                ac *= 2;
            }
            for (ll i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}