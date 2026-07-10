#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
int main()
{
    int cases;
    cin >> cases;
    for (int j = 0; j < cases; j++)
    {
        set<int> t;
        int sub_cases;
        cin >> sub_cases;
 
        for (int i = 0; i < sub_cases; i++)
        {
            int n;
            cin >> n;
            t.insert(n);
        }
        cout << *t.rbegin() - *t.begin() + 1 << endl;
    }
 
    return 0;
}