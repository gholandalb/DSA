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
        string a, b;
        cin >> n >> a >> b;
        int imparA = 0, imparB = 0, parA = 0, parB = 0;
        for (int i = 0; i < n; i++)
        {
            if (i%2 == 0)
            {
                if (a[i] == '1')
                    parA++;
                if (b[i] == '1')
                    parB++;
            }
            else
            {
                if (a[i] == '1')
                    imparA++;
                if (b[i] == '1')
                    imparB++;
            }
        }
        if (parA == parB && imparA == imparB)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}