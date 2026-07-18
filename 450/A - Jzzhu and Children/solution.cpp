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
    int size, candy;
    cin >> size >> candy;
    queue<pair<int, int>> line;
    for (int i = 1; i <= size; i++)
    {
        int a;
        cin >> a;
        line.push(mp(a, i));
    }
    while(line.size() != 1)
    {
        if (line.front().first <= candy)
        {
            line.pop();
        }
        else
        {
            line.front().first -= candy;
            line.push(line.front());
            line.pop();
        }
    }
    cout << line.front().second;
}