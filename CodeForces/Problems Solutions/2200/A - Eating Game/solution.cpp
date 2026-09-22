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
        int n;
        cin >> n;
        int maior = 0, qnt_maior = 0;
        for (int i = 0; i < n; i++)
        {
            int num; 
            cin >> num;
            if (num > maior)
            {
                maior = num;
                qnt_maior = 1;
            }
            else if (num == maior)
            {
                qnt_maior++;
            }
        }
        cout << qnt_maior << endl;
    }
    return 0;
}