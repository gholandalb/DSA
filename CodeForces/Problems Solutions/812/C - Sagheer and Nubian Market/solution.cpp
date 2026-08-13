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
 
ll total_sum(vector<ll>& prices, ll mid, ll n)
{
    ll sum = 0;
    vll real_cost;
    for (int i = 0; i < n; i++)
    {
        real_cost.push_back(prices[i] + (i + 1)*mid);
 
    }
    sort(real_cost.begin(), real_cost.end());
    for (int i = 0; i < mid; i++)
    {
        sum += real_cost[i];
    }
    return sum;
}
 
int main()
{
    ll n, budget;
    cin >> n >> budget;
    vll prices(n);
    for (int i = 0; i < n; i++)
        cin >> prices[i];
    ll i = 0, f = n;
    ll ans1 = 0, ans2 = 0;
    while (i <= f)
    {
        ll mid = (f - i)/2 + i;
        ll total_price = total_sum(prices, mid, n);
        if (total_price <= budget)
        {
            ans1 = mid;
            ans2 = total_price;
            i = mid + 1;
        }
        else
            f = mid - 1;
    }
    cout << ans1 << " " << ans2;
    return 0;
}