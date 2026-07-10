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
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        vll cards(size);
        bool works = false;
        int two_or_more = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> cards[i];
            if (cards[i] >= 3)
            {
                    works = true;                 
            }
            if (cards[i] >= 2)
                two_or_more++;
        }
        if (two_or_more >= 2)
            works = true;
            
        if (works)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}