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
    int boxes;
    cin >> boxes;
    unordered_map<int, int> amount;
    for (int i = 0; i < boxes; i++)
    {
        int n;
        cin >> n;
        amount[n]++;
    }
    int maior = 0;
    for (auto p : amount)
    {
        if (p.second > maior)
            maior = p.second;
    }
    cout << maior;
}