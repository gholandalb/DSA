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
    string aa, bb, cc;
    getline(cin, aa);
    getline(cin, bb);
    getline(cin, cc);
    vector<int> vowels(3, 0);
    for (int i = 0; i < (int)aa.size(); i++)
    {
        char a = aa.at(i);
        if (a == 'a'|| a == 'e' || a == 'i' || a == 'o' || a == 'u')
            vowels[0]++;
    }
    if (vowels[0] != 5)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < (int)bb.size(); i++)
    {
        char a = bb.at(i);
        if (a == 'a'|| a == 'e' || a == 'i' || a == 'o' || a == 'u')
            vowels[1]++;
    }
    if (vowels[1] != 7)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < (int)cc.size(); i++)
    {
        char a = cc.at(i);
        if (a == 'a'|| a == 'e' || a == 'i' || a == 'o' || a == 'u')
            vowels[2]++;
    }
    if (vowels[2] != 5)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}