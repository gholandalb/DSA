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
 
 
bool cmp(pii a, pii b)
{
    if (a.first != b.first)
        return a.first > b.first;
    return a.second < b.second;
}
 
 
int main()
{
    int teams, result;
    cin >> teams >> result;
    vpii team_result;
    multiset<pair<int, int>> pairs_count;
    for (int i = 0; i < teams; i++)
    {
        int a, b;
        cin >> a >> b;
        team_result.pb(mp(a, b));
        pairs_count.insert(mp(a, b));
    }
    sort(team_result.begin(), team_result.end(), cmp);
    cout << pairs_count.count(team_result[result - 1]);
    // for (auto it = team_result.begin(); it < team_result.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
    return 0;
}