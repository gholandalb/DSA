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
const int MAXN = 2 * 1e5 + 10;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll r, c; cin >> r >> c;
    if (r == 2 || c == 2)
    {
        cout << "*";
        return 0;
    }
    else if (c == r && c <= 4)
    {
        cout << "*";
        return 0;
    }
    if (c == r)
    {
        cout << c - 2 << " " << r - 1;
        return 0;
    }
    cout << r - 1 << " " << c - 1;
    return 0;
}