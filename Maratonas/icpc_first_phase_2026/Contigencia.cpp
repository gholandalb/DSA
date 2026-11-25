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
    ll soma = 0;
    ll n;
    cin >> n;
    vi estoque(n);
    ll menor_diff = 100000;
    for (int i = 0; i < n; i++)
    {
        cin >> estoque[i];
        soma += estoque[i];
    }
    for (int i = 0; i < n; i++)
    {
        ll num; 
        cin >> num;
        if (num > estoque[i])
        {
            cout << -1 << endl;
            return 0;
        }
        menor_diff = min(menor_diff, estoque[i] - num);
    }
    cout << soma - menor_diff; 
    return 0;
}