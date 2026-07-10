#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int> level(n+1, 0);
    int p;
    cin >> p;
 
    for (int i = 0; i < p; i++)
    {
        int x; 
        cin >> x;
        level[x] = 1;
    } 
 
    int q;
    cin >> q;
 
    for (int i = 0; i < q; i++)
    {
        int y; 
        cin >> y;
        level[y] = 1;
    } 
 
    for (int i = 1; i < n+1; i++)
    {
        if (level[i] == 0)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
 
    cout << "I become the guy.";
    return 0;
}