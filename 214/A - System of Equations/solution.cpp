#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int m, n;
    cin >> m >> n;
    int couting = 0;
    for (int i = 0; i <= max(m, n); i++)
    {
        for (int j = 0; j <= max(m, n); j++)
        {
            if ((i*i) + j == n && i + (j*j) == m)
                couting++;
        }
    }
    cout << couting;
}