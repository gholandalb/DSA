#include <bits/stdc++.h>
using namespace std;
 
typedef long long           ll;
typedef long double         ld;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
 
 
#define pb             push_back
#define mp             make_pair
#define fi             first
#define se             second
 
 
int main()
{
    int n;
    cin >> n;
 
    set<int> nums;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums.insert(a);
    }
    if (nums.size() > 1)
    {
        nums.erase(nums.begin());
        cout << (*nums.begin());
    }
    else
        cout << "NO";
    return 0;
}