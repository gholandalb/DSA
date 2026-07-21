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
    map<string, int> data;
    int n;
    cin >> n;
    while (n--)
    {
        string n;
        cin >> n;
        if (data.count(n) > 0)
        {
            cout << n << data[n] << endl;
            data[n]++;
        }
        else
        {
            data[n] = 1;
            cout << "OK" << endl;
        }
    }
    return 0;
}