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
    int n, obj;
    cin >> n >> obj;
    vpii sinal;
    for (int i = 0; i < n; i++)
    {
        int x, r;
        cin >> x >> r;
        sinal.pb(mp(x - r, x + r));

    }
    sort(sinal.begin(), sinal.end());
    bool works = false;
    int maior_alcance = sinal[0].second; 
    for (int i = 0; i < (int)sinal.size(); i++)
    {
        if (sinal[i].first <= maior_alcance)
        {
            maior_alcance = max(sinal[i].second, maior_alcance);
            if (sinal[i].second >= obj)
            {
                works = true;
                break;
            }
        }
        else
        {
            break;
        }

    }
    if (works)
        cout << "S";
    else
        cout << "N";
    return 0;
}