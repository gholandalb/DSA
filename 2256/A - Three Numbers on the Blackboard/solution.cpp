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
        vi nums(3);
        for (int i = 0; i < 3; i++)
            cin >> nums[i];
        sort(nums.begin(), nums.end());
        int ans = 1e9;
        ans = nums[2] - nums[0];
        ans = min(ans, nums[1]);
        
        cout << ans << endl;
    }
    return 0;
}