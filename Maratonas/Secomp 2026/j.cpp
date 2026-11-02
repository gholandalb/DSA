#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y, k;
    cin >> x >> y >> k;
    if (k == 1)
    {
        if (x + y == 7 || x == y)
            cout << "NAO";
        else
            cout << "SIM";
    }
    else if (k == 0)
    {
        if (x == y)
            cout << "SIM";
        else
            cout << "NAO";
    }
    else
        cout << "SIM";
    
    return 0;
}