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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool alice = true, bob = true;
        for (int i = 0; i < (int)s.size();)
        {
            if (s[i] == '0' && alice)
            {
                s.erase(s.begin() + i);
                alice = false;
            }
            else if (s[i] == '1' && bob)
            {
                s.erase(s.begin() + i);
                bob = false;
            }
            else
                i++;
            if (!bob && !alice)
                break;
        }
        cout << s << endl;
    }
}