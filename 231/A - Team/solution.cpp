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
    int n;
    cin >> n;
 
    int answers[n][3];
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> answers[i][j];
    }
 
    int cases = 0;
 
    for (int i = 0; i < n; i++)
    {
        int amount = 0;
        for (int j = 0; j < 3; j++)
            if (answers[i][j] == 1)
                amount++;
        if (amount >= 2)
            cases++;
    }
    cout << cases;
}