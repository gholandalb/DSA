#include <bits/stdc++.h>
using namespace std;
 
typedef long long           ll;
typedef long double         ld;
typedef vector<int>         vi;
typedef vector<ll>          vll;
 
#define pb             push_back
#define mp             make_pair
#define fi             first
#define se             second
 
int main()
{
    ll cases;
    cin >> cases;
    for (ll i = 0; i < cases; i++)
    {
        ll n, c, d;
        cin >> n >> c >> d;
        vll desired_square;
        vll given_square(n*n);
        for (int i = 0; i < n*n; i++)
            cin >> given_square[i];
 
        sort(given_square.begin(), given_square.end());
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                desired_square.push_back(given_square[0] + i*d + j*c);
            }
        }
        sort(desired_square.begin(), desired_square.end());
        if (desired_square == given_square)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }
    return 0;
}