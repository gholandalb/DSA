#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    char n = s[0];
    for (char c : s)
    {
        if (c > n)
            n = c;
    }
    for (char a : s)
    {
        if (a == n)
            cout << a;
    }
    return 0;
}