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
    set<int> tam;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num > 0)
            tam.insert(num);
    }
    if (tam.empty())
        cout << 0;
    else if (tam.size() == 1)
        cout << 1;
    else
    {
        bool three = true;
        int last = -1;
        for (auto c : tam)
        {
            if (last == -1)
            {
                last = c;
                continue;
            }
            if (c - last >= 2)
            {
                three = false;
                break;
            }
        }
        if (three)
            cout << 3;
        else
            cout << 2;
    }
    
    return 0;
}