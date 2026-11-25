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
const int MAXN = 2 * 1e5 + 10;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n; cin >> n;
    vll seq;
    for (int i = 0; i < n; i++)
    {
        int num; cin >> num;
        if (seq.empty() || seq.back() != num)
            seq.pb(num);
    }
    n = seq.size();
    vll sem_i(MAXN, 0);

    if (n == 1)
    {
        cout << 0;
        return 0;
    }

    for (ll i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            sem_i[seq[i]]++;
        }
        else 
        {
            if (seq[i - 1] == seq[i + 1])
                sem_i[seq[i]] += 2;
            else
                sem_i[seq[i]]++;
            
        }
        //cout << ultimo << " ";
        
    }
    //cout << endl << "total " << total << endl;
    //for (auto c : sem_i)
    //    cout << c << " ";
    //cout << endl;
    cout << n - 1 - *max_element(sem_i.begin(), sem_i.end());
    return 0;
}
