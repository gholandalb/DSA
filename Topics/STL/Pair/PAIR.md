# Pair

A pair stores two related values. When declaring a pair, it's possible to choose the type of each value, such as int, double, char, string, etc.

## Declare

```cpp
pair<int, int> p;

pair<int, int> p = {10, 20};

auto p = make_pair(10, 20);
```

## Essential

```cpp
// accessing

cout << p.first;
cout << p.second;

// modifying

pair<int, int> a = {1, 5};

cout << a.first << " " << a.second; // 1 5

a.first = 7;

cout << a.first << " " << a.second; // 7 5
```

## Comparing

Pairs are compared in lexicographical order.

```cpp
pair<int,int> a = {1,5};
pair<int,int> b = {2,1};

cout << (a < b);
```

First, `first` is compared.

If they are equal, `second` is compared. The same situation will be found in "Observation"

### Complexity

All operations are **O(1)**.

## Observations (really important)

Pairs are usually stored in a vector.

```cpp
vector<pair<int, string>> vp =
{
    {2, "gabriel"},
    {1, "rafael"},
    {2, "gael"}
};

sort(vp.begin(), vp.end());

// This will sort in the following order:
// first element, then second element.

/*
In this case, the result will be:

{
    {1, "rafael"},
    {2, "gabriel"},
    {2, "gael"}
}

gabriel comes before gael because strings are compared
lexicographically, and 'b' comes before 'e'.
*/
```

---
