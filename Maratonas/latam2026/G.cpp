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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin >> n >> m;
    vector<vector<int>> mensagens(n + 1);

    for (int i = 1; i <= m; i++)
    {
        int s; cin >> s;
        if (mensagens[s].empty())
        {
            if (s + 1 <= n)
                mensagens[s + 1].pb(s);
            else
                mensagens[1].pb(s);
        }
        else
        {
            mensagens[mensagens[s].back()].pb(s);
        }
    }
    for (int i = 1; i <= n; i++)
        cout << mensagens[i].size() << " ";
    return 0;
}