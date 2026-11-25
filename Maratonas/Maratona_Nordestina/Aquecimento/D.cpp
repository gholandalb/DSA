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
    vector<bool> sinal(obj, false);
    for (int i = 0; i < n; i++)
    {
        int x, r;
        cin >> x >> r;
        for (int i = x - r; i <= x + r; i++)
        {
            if (i >= 0 && i <= obj)
                sinal[i] = true;
        }
    }
    bool works = true;
    for (int i = 0; i <= obj; i++)
        if (sinal[i] == false)
        {
            works = false;
            break;
        }
    if (works)
        cout << "S";
    else
        cout << "N";
    return 0;
}