#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<string> nums;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        nums.push_back(s);
    }
    int digits = 0;
    for (int i = 0; i < (int)nums[0].size(); i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (nums[0][i] != nums[j][i])
            {
                cout << digits;
                return 0;
            }
 
        }
        digits++;
    }
    cout << digits;
    return 0;
}