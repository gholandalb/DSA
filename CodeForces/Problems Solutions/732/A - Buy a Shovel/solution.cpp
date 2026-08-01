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
    int k;
    char r;
    cin >> k >> r;
    int i = 1;
    bool works = true;
    while (works)
    {
        int a = k*i;
        string s = to_string(a);
        if (s.back() == r || s.back() == '0')
        {
            works = false;
            break;
        }
        i += 1;
    }
    cout << i;
    return 0;
}