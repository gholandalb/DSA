#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
void sublime(int cases) 
{
    if (cases == 0)
        return;
    int x, n;
    cin >> x >> n;
    if (n%2 == 0)
        cout << 0 << endl;
    else 
        cout << x << endl;
    return sublime(cases-1);
}
 
 
 
int main()
{
    int cases;
    cin >> cases;
    sublime(cases);
}