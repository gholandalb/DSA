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
    string word;
    cin >> word;
 
    for (int i = 0; i < (int)word.size(); i++)
    {
        if (word[i] < 97)
            word[i] += 32;
        if (word[i] == 'o' || word[i] == 'a' || word[i] == 'y' || word[i] == 'e' || word[i] == 'i' || word[i] == 'u')
            continue;
        cout << "." << word[i];
    }
}