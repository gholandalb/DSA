#include <bits/stdc++.h>
using namespace std;

#define MAXN 100000
#define pi pair<int, int>


int n, m;
vector<pi> adj[MAXN];
bool visited[MAXN];
int dist[MAXN];

void dijkstra(int s)
{
    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
        visited[i] = false;
    }
    priority_queue<pi, vector<pi>, greater<pi>> q;
    dist[s] = 0;
    q.push({dist[s], s});
    while(!q.empty())
    {
        int v = q.top().second;
        q.pop();
        if (visited[v])
            continue;
        for (auto const &u : adj[v])
        {
            if (dist[u.second] > dist[v] + u.first)
            {
                dist[u.second] = dist[v] + u.first;
                q.push({dist[u.second], u.second});
            }
        }
    }
}

int main()
{
    
    string tempo1, tempo2;
    cin >> tempo1 >> tempo2;
    int hora1, hora2, min1, min2;
    hora1 = tempo1[1] - '0' + (tempo1[0] - '0')*10;
    hora2 = tempo2[1] - '0' + (tempo2[0] - '0')*10;
    min1 = tempo1[4] - '0' + (tempo1[3] - '0')*10;
    min2 = tempo2[4] - '0' + (tempo2[3] - '0')*10;

    int tempo = (hora2 - hora1)*60 + min2 - min1;

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        a--, b--;
        adj[a].push_back({c, b});
        adj[b].push_back({c, a});
    }
    dijkstra(0);
    if (dist[n - 1] > tempo || tempo < 0)
        cout << "NAO";
    else
        cout << "SIM";
    return 0;
}