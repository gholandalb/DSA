#include <bits/stdc++.h>
using namespace std;
 
typedef long long           ll;
typedef long double         ld;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
typedef vector<int>         vi;
typedef vector<ll>          vll;
typedef vector<pii>         vpii;
 
#define pb             push_back
#define mp             make_pair
#define fi             first
#define se             second
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        vector<int> num(size);
 
        for (int i = 0; i < size; i++)
            cin >> num[i];
 
        bool funciona = false;
 
        int uns_parte1 = 0, outros_parte1 = 0;
 
        for (int j = 0; j < size - 2 && !funciona; j++)
        {
            if (num[j] == 1)
                uns_parte1++;
            else
                outros_parte1++;
 
            if (uns_parte1 >= outros_parte1)
            {
                int tres_parte2 = 0, outros_parte2 = 0;
 
                for (int a = j + 1; a < size - 1; a++)
                {
                    if (num[a] == 3)
                        tres_parte2++;
                    else
                        outros_parte2++;
 
                    if (outros_parte2 >= tres_parte2)
                    {
                        funciona = true;
                        break;
                    }
                }
            }
        }
 
        if (funciona)
            cout << "YES
";
        else
            cout << "NO
";
    }
}