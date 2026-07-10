#include <bits/stdc++.h>
using namespace std;
 
typedef long long           ll;
typedef long double         ld;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
 
 
#define pb             push_back
#define mp             make_pair
#define fi             first
#define se             second
 
 
int main()
{
    int stones;
    cin >> stones;
    vector<char> v;
    for (int i = 0; i < stones; i++)
    {
        char c;
        cin >> c;
        v.push_back(c);
    }
    
    int removed = 0;
 
    for (int i = 0; i < stones-1; i++)
    {
        if (v[i] == v[i+1])
            removed++;
    }
    cout << removed;
}