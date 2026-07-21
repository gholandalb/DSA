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
    string a, b;
    cin >> a >> b;
    int works = 0;
    for (int i = 0; i < (int)a.size(); i++)
    {
        char test1, test2;
        test1 = toupper(a.at(i));
        test2 = toupper(b.at(i));
        // cout << test1 << "" << test2 << endl;
        if (test1 == test2)
            continue;
        else if (test1 < test2)
        {
            works = -1;
            break;
        }
        else
        {
            works = 1;
            break;
        }
    }
    cout << works << endl;
    return 0;
}