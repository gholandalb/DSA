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
    int n;
    cin >> n;
    vector<int> v(n);
    int ans = 0;
    int last_seen_even = -1, last_seen_odd = -1;
    int qnt_even = 0, qnt_odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i]%2 != 0)
        {
            qnt_odd++;
            last_seen_odd = i;
        }
        else
        {
            qnt_even++;
            last_seen_even = i;
        }
        if ((qnt_even > 1 && qnt_odd == 1) || (qnt_odd > 1 && qnt_even == 1))
            break;
    }
    if (qnt_even == 1)
        ans = last_seen_even;
    else
        ans = last_seen_odd;
    cout << ans + 1;
    return 0;
}