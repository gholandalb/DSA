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
    vector<int> tam;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num > 0)
            tam.pb(num);
    }
    sort(tam.begin(), tam.end());
    while(!tam.empty())
    {
        ans++;
        int m = tam.size()/2, sub = tam[m];
        m = lower_bound(tam.begin(), tam.end(), sub) - tam.begin();
        for (int i = m; i < (int)tam.size(); i++)
        {
            tam[i] -= sub;
            if (tam[i] == 0)
                tam.erase(tam.begin() + i);
        }
        sort(tam.begin(), tam.end());
    }
    cout << ans;
    return 0;
}