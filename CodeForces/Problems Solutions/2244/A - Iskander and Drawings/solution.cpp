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
        string s;
        cin >> size >> s;
 
        int atual = 0, maior = 0;
 
        for (int i = 0; i < size; i++)
        {
            if (s[i] == '#')
            {
                atual++;
            }
            else
            {
                maior = max(maior, atual);
                atual = 0;
            }
        }
 
        maior = max(maior, atual);
 
        cout << (maior + 1) / 2 << endl;
    }
 
    return 0;
}