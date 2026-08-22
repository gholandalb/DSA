# DFS — Depth-First Search

## Concept

**Depth-First Search (DFS)** is a graph traversal algorithm. Given a starting vertex, it visits every vertex that can be reached through the graph's edges.

DFS follows one path for as long as it finds unvisited vertices. When it cannot advance, it returns to previous vertices and explores other parts of the graph. A `visited` array ensures that each vertex is processed only once.

## Intuition and step-by-step process

Think of DFS as going **as deep as possible** before returning:

1. Mark the current vertex as visited.
2. Choose an unvisited neighbor.
3. Repeat the search from that neighbor.
4. When no unvisited neighbor remains, return to the previous vertex.
5. Continue until no reachable vertex remains unvisited.

For the five-vertex example in the source text, a DFS beginning at `1` may visit:

```text
1 → 2 → 3 → 5 → 4
```

It starts at `1`, advances to `2`, and then visits `3` and `5`. At `5`, its neighbors `2` and `3` have already been visited, so the search returns. After returning through `3` and `2`, it moves from `1` to `4`. The search then ends because every reachable vertex has been visited.

The exact order can depend on the order of the adjacency lists, but DFS always follows the same “go deep, then return” principle.

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

We also maintain:

```cpp
bool visited[N];
```

All entries are initially `false`.

## C++ implementation

```cpp
#include <bits/stdc++.h>
using namespace std;

const int N = 100005;

vector<int> adj[N];
bool visited[N];

void dfs(int s)
{
    if (visited[s]) return;

    visited[s] = true;

    // Process vertex s here.

    for (auto u : adj[s])
    {
        dfs(u);
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

    dfs(1);
}
```

### Main lines explained

```cpp
if (visited[s]) return;
```

If `s` was already visited, the call ends immediately. This avoids repeated work and prevents the search from becoming trapped in a cycle.

```cpp
visited[s] = true;
```

Marks `s` before its neighbors are explored.

```cpp
for (auto u : adj[s])
```

Iterates through every neighbor `u` of `s`.

```cpp
dfs(u);
```

Continues the depth-first search from that neighbor. If `u` was already visited, the first line of `dfs` returns immediately.

## Complexity

The time complexity is:

```text
O(n + m)
```

where `n` is the number of vertices and `m` is the number of edges. The algorithm processes each vertex and edge once during the traversal.

## Applications

The following applications assume an undirected graph.

### Connectivity

A graph is connected if there is a path between every pair of vertices. Start DFS at any vertex and check whether all vertices were visited. If any vertex remains unvisited, the graph is not connected.

### Connected components

Iterate through all vertices and start a new DFS whenever the current vertex has not been visited:

```cpp
int components = 0;

for (int s = 1; s <= n; s++)
{
    if (!visited[s])
    {
        dfs(s);
        components++;
    }
}
```

Each new DFS visits one previously unexplored connected component.

### Cycle detection

During the traversal of an undirected graph, a cycle exists if we find an already visited neighbor that is not the previous vertex on the current path.

The source text gives the cycle:

```text
3 → 2 → 5 → 3
```

After moving from `2` to `5`, the search notices that `5` has the already visited neighbor `3`.

The text also gives a counting criterion. If an acyclic component has `c` vertices, it has exactly `c - 1` edges. A component with `c` or more edges certainly contains a cycle.

### Bipartiteness

A graph is bipartite if its vertices can be colored with two colors so that no adjacent vertices have the same color.

During DFS, color the starting vertex blue, its neighbors red, their neighbors blue, and so on. If two adjacent vertices ever receive the same color, the graph is not bipartite. Otherwise, the search produces a valid two-coloring. For a disconnected graph, repeat the process in every component.

## DFS versus BFS in practice

Both algorithms visit every vertex reachable from the starting vertex and run in `O(n + m)`. Their practical difference is traversal order:

- DFS follows one path as far as possible and then returns.
- BFS visits vertices level by level, in increasing order of distance from the start.

Both can be used for connectivity, connected components, cycle detection, and bipartiteness. The source text notes that DFS is often preferred for these tasks because it is easier to implement. BFS is the pertinent choice when distances from the starting vertex are needed.