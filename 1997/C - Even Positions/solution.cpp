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
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<pair<char, int>> pilha;
        int ans = 0;
        int to_close = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                to_close++;
            else if (s[i] == ')')
                to_close--;
            else if (s[i] == '_')
            {
                if (to_close == 0)
                {
                    to_close++;
                    s[i] = '(';
                }
                else
                {
                    s[i] = ')';
                    to_close--;
                }
            }
            if (!pilha.empty() && pilha.top().first == '(' && s[i] == ')')
            {
                ans += i - pilha.top().second;
                pilha.pop();
            }
            else
                pilha.push(mp(s[i], i));
        }
        cout << ans << endl;
    }
    return 0;
}