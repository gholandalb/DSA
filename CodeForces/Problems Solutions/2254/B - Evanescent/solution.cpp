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
        string s;
        cin >> s;
        string ans = "";
        int sub = 0;
        for (int i = 1; i < (int)s.size() - 1; i++)
        {
            if (s[i] != s[i + 1] && s[i] != s[i - 1])
            {
                if (s[i - 1] == s[i + 1])
                {
                    sub = 2;
                    break;
                }
                else if (sub < 2)
                    sub = 1;
            }
 
        }
        for (auto c : s)
        {
            if (ans.empty() || c != ans.back())
                ans.pb(c);
        }
 
        cout << ans.size() - sub << endl;
 
    }
    return 0;
}