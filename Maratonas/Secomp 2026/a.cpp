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

int bfs(vector<vector<int>>& adj, string tipo, int n, char inicial)
{
    vector<bool> visited(n + 1, false);
    queue<pair<int, char>> fila;
    fila.push(mp(1, inicial));

    int ans = 0;

    while(!fila.empty())
    {
        pair<int, char> topo = fila.front();
        fila.pop();

        if (visited[topo.first])
            continue;
        visited[topo.first] = true;
        
        if(tipo[topo.first - 1] != topo.second)
            ans++;

        char proximo;
        if (topo.second == 'W')
            proximo = 'L';
        else
            proximo = 'W';

        for (auto c : adj[topo.first])
        {
            if (!visited[c])
                fila.push({c, proximo});
        }
    }
    return ans;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>> adj(n + 1);

    string tipo;
    cin >> tipo;

    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    int ans1, ans2;
   
    vector<bool> visited1(n + 1, false);
    vector<bool> visited2(n + 1, false);
    
    ans1 = bfs(adj, tipo, n, 'W');
    ans2 = bfs(adj, tipo, n, 'L');

    cout << min(ans1, ans2);

    return 0;
}