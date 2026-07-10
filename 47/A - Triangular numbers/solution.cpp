#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    
    int num; 
    cin >> num;
    int sim = 0;
    for (int i = 0; (i*(i+1))/2 < 501; i++)
    {
        if (num == (i*(i+1))/2)
        {
            sim = 1;
        }    
    }
    if (sim == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}