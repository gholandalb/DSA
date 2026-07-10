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
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        int lines, M_speed, N_speed, IA_setup;
        cin >> lines >> M_speed >> N_speed >> IA_setup;
 
        int case1 = lines/(M_speed + N_speed);
 
        if (lines%(M_speed + N_speed) != 0)
        {
             case1++;
        }
        
        
 
        int case2 = 0;
 
        lines -= IA_setup*M_speed;
        case2 += IA_setup;
        if (case2 > 0)
        {
            case2 += lines/(M_speed + 10*N_speed);
            
            if (lines%(M_speed + 10*N_speed) != 0)
            {
                case2++;
            }
                
        }
        
 
        if (case1 < case2)
            cout << case1 << endl;
        else
            cout << case2 << endl;
    }
    return 0;
}