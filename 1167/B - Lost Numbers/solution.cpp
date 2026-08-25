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
    set<int> base = {4, 8, 15, 16, 23, 42};
    vector<int> ans(7);
    cout << "? 1 2" << endl;
    int x, y;
    cin >> x;
    cout << "? 1 3" << endl;
    cin >> y;
    for (auto c : base)
    {
        if (x % c != 0 || y % c != 0)
            continue;
 
        int v1 = x / c;
        int v2 = y / c;
 
        if (!base.count(v1) || !base.count(v2))
            continue;
 
        if (c == v1 || c == v2 || v1 == v2)
            continue;
        ans[1] = c;
        ans[2] = v1;
        ans[3] = v2;
        base.erase(c); base.erase(x/c); base.erase(y/c);
        break;
    }
    cout << "? 4 5" << endl;
    cin >> x;
    cout << "? 4 6" << endl;
    cin >> y;
 
    for (auto c : base)
    {
        if (x % c != 0 || y % c != 0)
            continue;
 
        int v1 = x / c;
        int v2 = y / c;
 
        if (!base.count(v1) || !base.count(v2))
            continue;
 
        if (c == v1 || c == v2 || v1 == v2)
            continue;
        ans[4] = c;
        ans[5] = v1;
        ans[6] = v2;
        base.erase(c); base.erase(x/c); base.erase(y/c);
        break;
    }
    cout << "! ";
    for (int i = 1; i < 7; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}