#include <bits/stdc++.h>
using namespace std;
 
typedef long long           ll;
typedef long double         ld;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
 
 
#define pb             push_back
#define mp             make_pair
#define fi             first
#define se             second
 
 
int main()
{
    int size, t;
    cin >> size >> t;
    string queue;
    cin >> queue;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (queue[j] == 'B' && queue[j + 1] == 'G')
            {
                swap(queue[j], queue[j + 1]);
                j++;
            }
 
        }
    }
    cout << queue;
    return 0;
}