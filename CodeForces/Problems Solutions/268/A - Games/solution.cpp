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
    multiset<int> home;
    multiset<int> away;
    for (int i = 0; i < t; i++)
    {   
        int a, b;
        cin >> a >> b;
        home.insert(a);
        away.insert(b);
    }
    int ans = 0;
    for (auto c : home)
    {
        if (away.count(c) > 0)
        {
            ans += (away.count(c)*home.count(c));
            away.erase(c);
        }
    }
    cout << ans;   
}