# BFS — Breadth-First Search

## Concept

**Breadth-First Search (BFS)** is a graph traversal algorithm. Given a starting vertex, it visits every reachable vertex in **increasing order of distance** from the start.

The graph is explored one level at a time:

1. first, the starting vertex at distance `0`;
2. then, all vertices at distance `1`;
3. next, all vertices at distance `2`;
4. and so on until every reachable vertex is visited.

This ordering lets BFS calculate the distance from the starting vertex to all other reachable vertices.

## Intuition: a queue

BFS uses a **queue**. The first vertex inserted is the first one removed and processed.

For each processed vertex:

1. inspect all its neighbors;
2. for every unvisited neighbor, record its distance;
3. mark the neighbor as visited;
4. add it to the end of the queue.

Because new vertices enter at the end, vertices closer to the starting point are processed before those farther away.

## Adjacency-list representation

The graph is stored using adjacency lists:

```cpp
vector<int> adj[N];
```

Here, `adj[s]` contains every neighbor of vertex `s`. In an undirected graph, an edge between `a` and `b` is stored in both directions:

```cpp
adj[a].push_back(b);
adj[b].push_back(a);
```

BFS also maintains:

```cpp
queue<int> q;
bool visited[N];
int distance[N];
```

- `q` contains vertices waiting to be processed.
- `visited` indicates which vertices have already been discovered.
- `distance` stores the distances from the starting vertex.

## Step-by-step example

In the example from the source text, BFS starts at vertex `1` and obtains these distances:

| Vertex | Distance from `1` |
|---:|---:|
| 1 | 0 |
| 2 | 1 |
| 3 | 2 |
| 4 | 1 |
| 5 | 2 |
| 6 | 3 |

The exploration proceeds by levels:

```text
distance 0: 1
distance 1: 2, 4
distance 2: 3, 5
distance 3: 6
```

First, BFS processes `1`. It then processes all vertices reachable using one edge, followed by those requiring two edges, and finally vertex `6`, which is three edges away.

## C++ implementation

```cpp
#include <bits/stdc++.h>
using namespace std;

const int N = 100005;

vector<int> adj[N];
bool visited[N];
int distanceFromStart[N];

void bfs(int x)
{
    queue<int> q;

    visited[x] = true;
    distanceFromStart[x] = 0;
    q.push(x);

    while (!q.empty())
    {
        int s = q.front();
        q.pop();

        // Process vertex s here.

        for (auto u : adj[s])
        {
            if (visited[u]) continue;

            visited[u] = true;
            distanceFromStart[u] = distanceFromStart[s] + 1;
            q.push(u);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bfs(1);
}
```

### Main lines explained

```cpp
visited[x] = true;
distanceFromStart[x] = 0;
q.push(x);
```

The starting vertex is marked as visited, assigned distance `0`, and inserted into the queue.

```cpp
while (!q.empty())
```

The search continues while vertices are waiting to be processed.

```cpp
int s = q.front();
q.pop();
```

Retrieves and removes the first vertex in the queue.

```cpp
if (visited[u]) continue;
```

Skips a neighbor that has already been discovered.

```cpp
visited[u] = true;
```

Marks the neighbor when it enters the queue, preventing it from being added again.

```cpp
distanceFromStart[u] = distanceFromStart[s] + 1;
```

Because `u` is adjacent to `s`, its distance is the distance of `s` plus one edge.

```cpp
q.push(u);
```

Adds `u` to the end of the queue for later processing.

## Complexity

The time complexity is:

```text
O(n + m)
```

where `n` is the number of vertices and `m` is the number of edges. Each vertex and edge is processed once during the traversal.

## Applications

The following applications assume an undirected graph.

### Calculating distances

This is BFS's most characteristic property in the source text. Because vertices are processed level by level, `distanceFromStart[u]` stores the distance from the starting vertex to `u` as a number of edges.

### Connectivity

Run BFS from any vertex. If every vertex is visited, the graph is connected. If any vertex remains unvisited, it is not connected.

### Connected components

Iterate through all vertices and begin a new BFS whenever an unvisited vertex is found:

```cpp
int components = 0;

for (int s = 1; s <= n; s++)
{
    if (!visited[s])
    {
        bfs(s);
        components++;
    }
}
```

Each BFS visits one complete connected component.

### Cycle detection

During the traversal of an undirected graph, a cycle can be detected when we find an already visited neighbor that is not the previous vertex on the path being considered.

The source text also gives a counting criterion: an acyclic component with `c` vertices has exactly `c - 1` edges. If the component has `c` or more edges, it certainly contains a cycle.

### Bipartiteness

BFS's level structure naturally supports two-coloring. Give the starting vertex one color, its neighbors the other color, and continue alternating. If two adjacent vertices receive the same color, the graph is not bipartite. If no conflict is found, the search produces a valid coloring. In a disconnected graph, repeat the process in every component.

## BFS versus DFS in practice

Both algorithms visit every vertex reachable from the starting vertex and run in `O(n + m)`. Their practical difference is traversal order:

- BFS explores level by level and uses a queue.
- DFS follows a path for as long as possible and can be implemented recursively.

BFS is especially relevant when distances from the starting vertex are required. Both searches can be used for connectivity, connected components, cycle detection, and bipartiteness. The source text notes that DFS is often chosen for these other applications because it is simpler to implement.
