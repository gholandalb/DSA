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
    vi ans(n + 1);
    int ac1 = 0, ac2 = 0;
    for (int i = 1; i <= n; i++)
    {
        int num1, num2;
        cin >> num1 >> num2;

        ac1 += num1;
        ac2 += num2;

        if (ac1 == ac2)
            ans[i] = 0;
        else if (ac1 > ac2)
            ans[i] = 1;
        else
            ans[i] = -1;
    }
    int k; cin >> k;
    while (k--)
    {
        int idx; cin >> idx;
        if (ans[idx] == 0)
            cout << "NEUTRO\n";
        else if (ans[idx] == 1)
            cout << "COMPRA\n";
        else
            cout << "VENDA\n";
    }
    return 0;
}