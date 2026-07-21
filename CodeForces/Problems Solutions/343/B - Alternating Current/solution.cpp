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
    string s;
    cin >> s;
    stack<char> wire;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (wire.empty())
            wire.push(s[i]);
        else    
            {
                if (wire.top() == s[i])
                    wire.pop();
                else
                    wire.push(s[i]);
            }
    }
    if (wire.empty())
    {
        cout << "Yes";
    }
    else
        cout << "No";
    return 0;
}