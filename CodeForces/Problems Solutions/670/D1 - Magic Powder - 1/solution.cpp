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
 
bool check_cookies(vector<int>& ingredientes_min, vector<int>& ingredientes_disponivel, int n, int magic)
{
    int dif_total = 0;
    for (int i = 0; i < (int)ingredientes_min.size(); i++)
    {
        if (ingredientes_min[i]*n > ingredientes_disponivel[i])
        {
            dif_total += ingredientes_min[i]*n - ingredientes_disponivel[i];
        }
    }
    return magic >= dif_total;
}
 
int binario(vector<int>& ingredientes_min, vector<int>& ingredientes_disponivel, int magic, int i, int f, int ans)
{
    int mid = (i + f)/2;
    bool works = check_cookies(ingredientes_min, ingredientes_disponivel, mid, magic);
 
    if (i > f)
        return mid;
    if (works)
    {
        return binario(ingredientes_min, ingredientes_disponivel, magic, mid + 1, f, ans);
    }
    else
        return binario(ingredientes_min, ingredientes_disponivel, magic, i, mid - 1, ans);
 
 
}
 
int main()
{
    int n, magic;
    cin >> n >> magic;
    vi ingredientes_min(n), ingredientes_disponivel(n);
    for (int i = 0; i < n; i++)
        cin >> ingredientes_min[i];
    for (int i = 0; i < n; i++)
        cin >> ingredientes_disponivel[i];
    cout << binario(ingredientes_min, ingredientes_disponivel, magic, 0, 100000, 0);
    return 0;
}