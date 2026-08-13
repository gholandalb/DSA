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
    int n, t; 
    cin >> n >> t;
    vector<int> books(n);
    for (int i = 0; i < n; i++)
    {
        cin >> books[i];
    }
    int r = 0, l = 0, ans = 0, sum = 0;
    while (r < n)
    {
        sum += books[r];
        while (sum > t)
        {
            sum -= books[l];
            l++;
        }
        ans = max(ans, r - l + 1);
        r++;
    }
    cout << ans;
    return 0;
}