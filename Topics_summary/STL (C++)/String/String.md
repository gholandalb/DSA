# String

A string stores a sequence of characters. In C we use an array, but in C++ we have specifically "string" to declare.

## Declare

```cpp
string s;

string s = "Gabriel";

string s("Hello");
```

## Essential

```cpp
// size

cout << s.size();
cout << s.length(); // same as size()

// accessing

cout << s[0];
cout << s.at(1);

// first and last character

cout << s.front();
cout << s.back();

// modifying

s[0] = 'g';

// adding

s += " Albuquerque";
s.push_back('!');

// removing

s.pop_back();

// clearing

s.clear();

// checking if empty

cout << s.empty();
```

## Reading Input

```cpp
string s;

// reads until the first space
cin >> s;

// reads the entire line
getline(cin, s);
```

If using `getline()` after `cin`, ignore the remaining newline:

```cpp
cin.ignore();

getline(cin, s);
```

## Iterating

```cpp
for (char c : s)
{
    cout << c << " ";
}
```

Or modify the characters:

```cpp
for (char &c : s)
{
    c = toupper(c);
}
```

## Useful Functions

```cpp
// substring

string s = "Gabriel";

cout << s.substr(0, 3); // Gab

// find

cout << s.find("ri"); // 3

// erase

s.erase(2, 3);

// insert

s.insert(2, "ABC");

// replace

s.replace(2, 3, "XYZ");

// reverse

reverse(s.begin(), s.end());

// sort

sort(s.begin(), s.end());
```

## Comparing

Strings are compared lexicographically.

```cpp
string a = "apple";
string b = "banana";

cout << (a < b);
```

Output:

```
1
```

Because `"apple"` comes before `"banana"` alphabetically.

## Complexity

| Operation | Complexity |
|-----------|------------|
| `s.size()` | **O(1)** |
| `s[i]` | **O(1)** |
| `push_back()` | **O(1)** amortized |
| `pop_back()` | **O(1)** |
| `substr()` | **O(k)** |
| `find()` | **O(n)** |
| `erase()` | **O(n)** |
| `insert()` | **O(n)** |
| `replace()` | **O(n)** |
| `reverse()` | **O(n)** |
| `sort()` | **O(n log n)** |
| `clear()` | **O(n)** |

## Observations 

Strings behave similarly to vectors.

```cpp
string s = "abc";

cout << s[0];      // a
cout << s.back();  // c

s.push_back('d');

cout << s; // abcd
```

---

Strings are **0-indexed**.

```cpp
string s = "hello";

cout << s[0]; // h
cout << s[4]; // o
```

---

`size()` and `length()` are exactly the same.

```cpp
cout << s.size();
cout << s.length();
```

Use whichever you prefer.

---

`find()` returns the position of the first occurrence.

```cpp
string s = "banana";

cout << s.find("ana"); // 1
```

If the substring is not found:

```cpp
cout << s.find("xyz");
```

Output:

```cpp
string::npos
```

Always check like this:

```cpp
if (s.find("abc") != string::npos)
{
    cout << "Found!";
}
```

---

Convert to uppercase:

```cpp
for (char &c : s)
{
    c = toupper(c);
}
```

Convert to lowercase:

```cpp
for (char &c : s)
{
    c = tolower(c);
}
```

---

A string can be sorted.

```cpp
string s = "dcab";

sort(s.begin(), s.end());

cout << s;
```

Output:

```
abcd
```

---

A string can be reversed.

```cpp
reverse(s.begin(), s.end());
```