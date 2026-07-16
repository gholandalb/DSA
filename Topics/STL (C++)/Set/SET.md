# Set

A set is an STL container that stores **unique elements** in sorted order. In a set, most operations take O(log n) time.

Unlike a vector, elements cannot be accessed by index.

## Declare

```cpp
set<int> s;

set<int> s = {5, 2, 8, 1};
// Stored as:
{1, 2, 5, 8}
//set auto stores elements sorted
```

## Essential

```cpp
set<int> s;

// inserting

s.insert(10);
s.insert(20);
s.insert(30);

// searching

cout << s.count(20); // 1
cout << s.count(15); // 0

// removing

s.erase(20);

cout << s.count(20); // 0
```

## Accessing Elements


```cpp
set<int> s = {10, 20, 30};

cout << *s.begin(); // 10
cout << *prev(s.end()); // 30

for (int x : s)
{
    cout << x << " ";
}

//10 20 30

//Or using iterators:

for (auto it = s.begin(); it != s.end(); it++)
{
    cout << *it << " ";
}
```

## Searching

The `count()` function checks whether an element exists.

```cpp
set<int> s = {1, 2, 3};

cout << s.count(2); // 1
cout << s.count(5); // 0
//since all elements are unique, s.count returns in they are in the set

auto it = s.find(2);

//if s.find(x) returns the end of the set the element does no exist

if (it != s.end())
{
    cout << *it;
}

s.find(10) == s.end()
```

## Duplicate Elements

A set does **not** allow duplicate elements.

```cpp
set<int> s;

s.insert(5);
s.insert(5);
s.insert(5);
//{5}
```

Only one copy is stored.

## Common Functions

```cpp
set<int> s;

s.insert(5);

s.size();      // number of elements
s.empty();     // true if empty
s.clear();     // removes all elements

s.count(5);    // returns 1 or 0
s.find(5);     // returns an iterator

s.erase(5);    // removes the element
```

## Complexity

| Operation | Complexity |
|-----------|------------|
| `insert()` | **O(log n)** |
| `erase()` | **O(log n)** |
| `find()` | **O(log n)** |
| `count()` | **O(log n)** |
| `begin()` | **O(1)** |
| `size()` | **O(1)** |
| `empty()` | **O(1)** |
| `clear()` | **O(n)** |

## Related Containers

### multiset

A multiset works exactly like a set, except that it allows duplicate elements.

```cpp
multiset<int> ms;

ms.insert(5);
ms.insert(5);
ms.insert(5);

cout << ms.count(5); // 3
```

Removing **all** occurrences:

```cpp
ms.erase(5);

cout << ms.count(5); // 0
```

Removing **only one** occurrence:

```cpp
ms.erase(ms.find(5)); //2
```

### unordered_set

An unordered_set stores unique elements using a hash table.

Unlike `set`:

- Elements are **not sorted**.
- Average insertion, removal, and search are **O(1)**.

```cpp
unordered_set<int> us;

us.insert(5);
us.insert(2);
us.insert(10);
```

The iteration order is unspecified.

## Use:

- `set` → when you need the elements sorted.
- `multiset` → when you need to know the amount of elements sorted.
- `unordered_set` → when order does not matter and you want faster average performance.

---