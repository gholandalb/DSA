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
 
bool check(vector<int>& arr, int k, int num)
{
    int sum = 0;
    int n = (arr.size() - 1);
    for (int i = n/2; i <= n; i++)
    {
        if (num - arr[i] > 0)
            sum += num - arr[i];
        if (sum > k)
            return false;
    }
    return true;
}
 
 
 
int main()
{
    int k, n;
    cin >> n >> k;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    ll l = 0, r = 2e9;
    int ans = 0;
    sort(arr.begin(), arr.end());
    while (l <= r)
    {
        int m = (r - l)/2 + l;
        bool works = check(arr, k, m);
        if (works)
        {
            ans = max(ans, m);
            l = m + 1;
        }
        else
            r = m - 1;
    }
    cout << ans;
}