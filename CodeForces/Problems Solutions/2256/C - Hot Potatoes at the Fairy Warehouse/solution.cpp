#include <bits/stdc++.h>
using namespace std;
 
typedef long long           ll;
typedef long double         ld;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
typedef vector<int>         vi;
typedef vector<ll>         vll;
typedef vector<pii>       vpii;
 
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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int even = 0, odd = 0;
        for (int i = 0; i < 2*n; i++)
        {
            if (s[i] == '0')
                continue;
            if(s[i] == '1' && s[(i + 1)%(2*n)] == '0')
            {
                if (i%2 == 0)
                    odd++;
                else
                    even++;
                i++;
            }
            else if (s[i] == '1')
            {
                if (i%2 == 0)
                    even++;
                else
                    odd++;
            }
 
 
        }
        cout << odd << " " << even << endl;
    }
    return 0;
}