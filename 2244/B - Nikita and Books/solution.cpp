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
        ll size;
        cin >> size;
        vector<ll> v(size);
        for (ll i = 0; i < size; i++)
        {
            cin >> v[i];
        }
        bool works = true;
        for (ll i = 0; i < size; i++)
        {
            ll dif = v[i] - (i + 1);
            if (dif < 0)
            {
                works = false;
                break;
            } 
            else if (i < size - 1)
            {
                v[i+1] += dif;
                v[i] = i + 1;
            }
        }
        if (works)
            cout << "YES
";
        else
            cout << "NO
";
        
    }
    return 0;
}