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
    while (t--)
    {
        int size;
        cin >> size;
        vi v(size);
 
        vi divisiveis_2;
        vi divisiveis_3;
        vi divisiveis_6;
        vi outros;
 
        for (int i = 0; i < size; i++)
        {
            cin >> v[i];
            if (v[i]%2 == 0 && v[i]%3 == 0)
                divisiveis_6.pb(v[i]);
            else if (v[i]%2 == 0)
                divisiveis_2.pb(v[i]);
            else if (v[i]%3 == 0)
                divisiveis_3.pb(v[i]);
            else
                outros.pb(v[i]);
        }
        for (int i = 0; i < (int)divisiveis_2.size(); i++)
        {
            cout << divisiveis_2[i] << " ";
        }
        for (int i = 0; i < (int)outros.size(); i++)
        {
            cout << outros[i] << " ";
        }
        for (int i = 0; i < (int)divisiveis_3.size(); i++)
        {
            cout << divisiveis_3[i] << " ";
        }
        for (int i = 0; i < (int)divisiveis_6.size(); i++)
        {
            cout << divisiveis_6[i] << " ";
        }
        cout << endl;
    }
    return 0;
}