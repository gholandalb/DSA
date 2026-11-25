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
    int l = 1, r = n;
    bool found = false;
    int ans = 0;
    while (!found)
    {
        n = r - l + 1;
        if (n == 1)
        {
            found = true;
            ans = l;
            break;
        }
        else if (n < 3)
        {
            cout << "? 1 " << l << " " << r << endl;
            char res;
            cin >> res;
            if (res == 'E')
                ans = l;
            else if (res == 'D')
                ans = r;
            break;
        }
        else
        {
            int p1 = l + n/3 - 1, p2 = l + 2*(n/3) - 1;
            cout << "? " << n/3 << " ";
            for (int i = l; i <= p2; i++)
                cout << i << " ";
            cout << endl;
            char res;
            cin >> res;
            if (res == 'E')
                r = p1;
            else if (res == 'D')
            {
                r = p2;
                l = p1 + 1;
            }
            else
            {
                l = p2 + 1;
            }
            //cout << "p1 "<< p1 << " p2 " << p2 << endl;
        }
    }
    cout << "! " << ans;
}




