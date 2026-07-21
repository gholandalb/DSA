# Map

A map stores key-value pairs, where each key is unique and automatically kept in sorted order (ascending by default).

## Declare

```cpp
map<int, string> mp;

map<string, int> freq;

map<char, int> cnt;
```

## Essential

```cpp
// inserting

mp[1] = "Gabriel";
mp[2] = "Rafael";

// accessing

cout << mp[1]; // Gabriel

// modifying

mp[1] = "Gael";

cout << mp[1]; // Gael

// checking if a key exists

cout << mp.count(1); // 1
cout << mp.count(5); // 0

// removing

mp.erase(2);

// size

cout << mp.size();

// clearing

mp.clear();
```

## Iterating

```cpp
for (auto p : mp)
{
    cout << p.first << " " << p.second << "\n";
}
```

Or, to avoid copies:

```cpp
for (const auto &p : mp)
{
    cout << p.first << " " << p.second << "\n";
}
```

## Finding

```cpp
auto it = mp.find(1);

if (it != mp.end())
{
    cout << it->first << " " << it->second;
}
```

If the key does not exist, `find()` returns `mp.end()`.

## Complexity

| Operation | Complexity |
|-----------|------------|
| `mp[key]` | **O(log n)** |
| `insert()` | **O(log n)** |
| `erase()` | **O(log n)** |
| `find()` | **O(log n)** |
| `count()` | **O(log n)** |
| `size()` | **O(1)** |
| `clear()` | **O(n)** |

## Observations 

Maps are **sorted by key**.

```cpp
map<int, string> mp;

mp[3] = "C";
mp[1] = "A";
mp[2] = "B";

for (auto p : mp)
{
    cout << p.first << " " << p.second << "\n";
}

// 1 A
// 2 B
// 3 C
```

The elements are **not stored in insertion order**.



Using `mp[key]` on a key that does not exist **creates** that key.

```cpp
map<int, int> mp;

cout << mp[10];
```

Output:

```
0
```

The key `10` is automatically inserted with the default value (`0` for `int`).

If you only want to check whether a key exists, use `find()` or `count()`.

---

Maps are extremely useful for **frequency counting**.

```cpp
vector<int> v = {2, 3, 2, 5, 3, 2};

map<int, int> freq;

for (int x : v)
{
    freq[x]++;
}
```

Result:

```
2 -> 3
3 -> 2
5 -> 1
```

---

The key type can be almost anything that can be compared.

```cpp
map<string, int> age;
map<char, int> cnt;
map<pair<int,int>, int> dist;
```

---

If you need the keys in **sorted order**, use `map`.

If order does **not** matter and you want faster average performance, use `unordered_map`.