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
    int cases;
    cin >> cases;
    vi sample2 = {1,2,1,1,2,2,1,2};
    vi sample3 = {1,1,2,1,2,3,1,3,2,2,3,3};
    for (int i = 0; i < cases; i++)
    {
        int n;
        cin >> n;
        int runned = 0;
        while (n > 0)
        {
            if (n%2 != 0)
            {
                for (int j = 0; j < (int)sample3.size(); j++)
                    cout << sample3[j] + runned << " ";
                runned += 3;
                n -= 3;
            }
            else if (n%2 == 0)
            {
                for (int j = 0; j < (int)sample2.size(); j++)
                    cout << sample2[j] + runned << " ";
                runned += 2;
                n -= 2;
            }
        }
        cout << endl;
    }
    return 0;
}