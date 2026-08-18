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
        int n, m;
 
        cin >> n >> m;
        vi bea(n), ver(m);
        for (int i = 0; i < n; i++)
        {
            cin >> bea[i];
        } 
        for (int i = 0; i < m; i++)
        {
            cin >> ver[i];
        } 
        int safe_bea = 0, safe_ver = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                safe_bea += bea[i];
            }
            else
            {
                safe_bea += (bea[i] - bea[i+1] + 1);
            }
        } 
        for (int i = 0; i < m; i++)
        {
            if (i == m - 1)
            {
                safe_ver += ver[i];
            }
            else
            {
                safe_ver += (ver[i] - ver[i+1] + 1);
            }
        }
        if (safe_ver == safe_bea || safe_bea > safe_ver)
            cout << 1 << endl;
        else 
            cout << 2 << endl;
    }
    return 0;
}