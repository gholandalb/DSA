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
    int a, b;
    cin >> a >> b;
    vi va(a);
    vi vb(b);
    for (int i = 0; i < a; i++)
    {
        cin >> va[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> vb[i];   
    }
    sort(va.begin(), va.end());
    for (int i = 0; i < b; i++)
    {
        cout << upper_bound(va.begin(), va.end(), vb[i]) - va.begin() << " ";
    }
    return 0;
}