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
    vll bars(n);
    for (int i = 0; i < n; i++)
    {
        cin >> bars[i];
    }
    sort(bars.begin(), bars.end());
    int t;
    cin >> t;
    while (t--)
    {
        ll num;
        cin >> num;
        cout << upper_bound(bars.begin(), bars.end(), num) - bars.begin() << endl;
    }
    return 0;
}