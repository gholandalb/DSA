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
    int cases;
    cin >> cases;
    for (ll i = 0; i < cases; i++)
    {
        ll a, b, c, total;
        cin >> total >> a >> b >> c;
        ll days = (total/(a+b+c))*3;
        ll remainder = total%(a+b+c);
        ll days_remainder = 1;
        ll walked = 0;
        while (walked < remainder)
            {
                if (days_remainder%3 == 1)
                    walked += a;
                else if (days_remainder%3 == 2)
                    walked += b;
                else
                    walked += c;
                days_remainder++;
            }
        cout << days + days_remainder -1 << endl;
    }
    return 0;
}