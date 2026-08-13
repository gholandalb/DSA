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
        bool works = true;
        for (int i = 2; i < n + 1; i++)
        {
            if ((n + 1)%i == 0)
            {
                works = false;
                break;
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