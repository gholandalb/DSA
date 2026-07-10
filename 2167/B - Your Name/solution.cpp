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
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        int characters;
        cin >> characters;
        string word1, word2;
        cin >> word1 >> word2;
 
        sort(word1.begin(), word1.end());
        sort(word2.begin(), word2.end());
 
        if (word1 == word2)
            cout << "YES
";
 
        else
            cout << "NO
";
    }
    return 0;
}