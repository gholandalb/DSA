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
    int t;
    cin >> t;
 
    while (t--)
    {
        priority_queue<pll> health;
 
        int n;
        ll k;
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            ll num;
            cin >> num;
            ll rem = num % k;
            if (rem == 0)
                rem = k;
 
            health.push({rem, -i});
        }
        while (!health.empty())
        {
            cout << -health.top().second << " ";
            health.pop();
        }
        cout << endl;
    }
    return 0;
}