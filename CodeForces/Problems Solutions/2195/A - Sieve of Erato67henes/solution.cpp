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
        int n;
        cin >> n;
        ll total;
        cin >> total;
        for (int i = 1; i < n; i++)
        {
            int a;
            cin >> a;
            total *= a;
        }
        if (total%67 == 0)
            cout << "YES
";
        else
            cout << "NO
";
    }
    return 0;
}