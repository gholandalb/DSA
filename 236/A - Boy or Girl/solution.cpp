#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
int main()
{
    string name;
    cin >> name;
    set<char> exists;
    for (auto c : name)
    {
        exists.insert(c);
    }
    if (exists.size()%2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}