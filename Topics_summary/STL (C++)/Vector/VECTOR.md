# Vector

A vector is a dynamic array provided by the STL. Unlike a regular array in C, its size can change dinamically.

Elements are stored contiguously in memory, allowing constant-time random access.

## Declare

```cpp
vector<int> v;

vector<int> v = {1, 2, 3, 4, 5};

vector<int> v(5);       // {0, 0, 0, 0, 0}

vector<int> v(5, 10);   // {10, 10, 10, 10, 10}
```

## Essential

```cpp
vector<int> v = {10, 20, 30};

// accessing

cout << v[0];        // 10
cout << v.at(1);     // 20 
//v[i] is almost the same as v.at(i)
cout << v.front();   // 10
cout << v.back();    // 30

// modifying

v[1] = 100;

cout << v[1];        // 100
```

## Adding Elements

```cpp
vector<int> v;

v.push_back(10);
v.push_back(20);
v.push_back(30);

// {10, 20, 30}

v.insert(v.begin() + 1, 15)
// {10, 15, 20, 30}
```

## Removing Elements

```cpp
vector<int> v = {10, 20, 30};

v.pop_back();

// {10, 20}

vector<int> v = {10, 20, 30, 40};

v.erase(v.begin() + 1);

// {10, 30, 40}

//Removing a range or an specific element:

vector<int> v = {1, 2, 3, 4, 5};

v.erase(v.begin() + 1, v.begin() + 4);
// {1, 5}

```



## Common Functions

```cpp
vector<int> v = {3, 1, 5};

v.size();      // 3
v.empty();     // false
v.clear();     // removes all elements
```

## Iterating



```cpp
//Using indices:
for (int i = 0; i < v.size(); i++)
{
    cout << v[i] << " ";
}

//Using range-based for:

for (int x : v)
{
    cout << x << " ";
}

//Using iterators:

for (auto it = v.begin(); it != v.end(); it++)
{
    cout << *it << " ";
}
```

## Sorting

```cpp
vector<int> v = {5, 2, 4, 1, 3};

sort(v.begin(), v.end());
//{1, 2, 3, 4, 5}
sort(v.rbegin(), v.rend());
//{5, 4, 3, 2, 1}
```

## Observations

- Random access (`v[i]`) is **O(1)**.
- Inserting or removing elements at the end is **O(1)** amortized.
- Inserting or removing elements at the beginning or in the middle is **O(n)** because the remaining elements must be shifted.

Example:

```cpp
vector<int> v = {10, 20, 30, 40};

v.insert(v.begin() + 2, 25);

// {10, 20, 25, 30, 40}
```

The elements 30 and 40 are shifted one position to the right.

## Complexity

| Operation | Complexity |
|-----------|------------|
| Access (`v[i]`) | **O(1)** |
| `front()` | **O(1)** |
| `back()` | **O(1)** |
| `push_back()` | **O(1)**  |
| `pop_back()` | **O(1)** |
| `insert()` (middle) | **O(n)** |
| `erase()` (middle) | **O(n)** |
| `size()` | **O(1)** |
| `empty()` | **O(1)** |
| `clear()` | **O(n)** |
| `sort()` | **O(n log n)** |
---