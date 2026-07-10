#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        string num;
        vector<int> numI;
        cin >> num;
        for (int j = 0; j < 4; j++)
        {
            if (num[j] == '0')
                numI.push_back(10);
            else
                numI.push_back(num[j] - '0');
        }
        cout << 4 + abs(numI[0] - 1) + abs(numI[1] - numI[0]) + abs(numI[2] - numI[1]) + abs(numI[3] - numI[2]) << endl;
    }
}