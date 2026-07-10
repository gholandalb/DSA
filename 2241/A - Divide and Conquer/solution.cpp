#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x%y == 0)
            cout << "YES";
        else 
            cout << "NO";
        cout << endl;
    }
    return 0;
}