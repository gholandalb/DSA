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

    string s; cin >> s;
    int uns = 0;
    int n = s.size();

    int rmin = MAXN, rmax = 0;
    for (auto c : s)
    {
        if (c == '1')
            uns++;
    }
    for (int i = 0; i < n; i++)
    {
        if ((s[i] == '1' && i%2 == 0) || (i%2 != 0 && s[i] == '0'))
            uns = n - uns + 1;
        else
            uns = n - uns - 1;
        rmin = min(rmin, uns);
        rmax = max(rmax, uns);
        cout << "uns: " << uns << endl;
    }
    //cout << rmin << " " << rmax;
    
    return 0;
}