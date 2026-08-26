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
 
int ans = 0;
 
void check(vector<vector<int>>& tree, vector<int>& cats, vector<bool>& visited, int n, int consecutive_cats, int m)
{
    visited[n] = true;
    if (cats[n] == 1)
        consecutive_cats++;
    else
        consecutive_cats = 0;
    if (consecutive_cats > m)
        return;
    bool went_somewhere = false;
    for (auto c : tree[n])
    {
        if (visited[c] == true)
            continue;
        else 
        {
            went_somewhere = true;
            check(tree, cats, visited, c, consecutive_cats, m);
        }
    }
    if (went_somewhere == false)
    {
        ans++;
        return;
    }
    return;
}
 
 
int main()
{
    int n, m;
    cin >> n >> m;
    vi cats(n + 1);
    vector<bool> visited(n + 1, false);
    for (int i = 1; i <= n; i++)
    {
        cin >> cats[i];
    }
    vector<vector<int>> tree(n + 1);
    for (int i = 1; i < n; i++)
    {
        int num1, num2;
        cin >> num1 >> num2;
        tree[num1].pb(num2);
        tree[num2].pb(num1);
    }
    visited[1] = true;
    check(tree, cats, visited, 1, 0, m);
    cout << ans;
    return 0;
}