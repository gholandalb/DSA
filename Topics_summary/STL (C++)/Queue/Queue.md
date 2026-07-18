 Queue

A queue stores elements following the FIFO (First In, First Out)principle. The first element inserted is the first one removed. Basically the oposite of a stack.

## Declare

```cpp
queue<int> q;
```

## Essential

```cpp
// inserting

q.push(10);
q.push(20);
q.push(30);

// accessing

cout << q.front(); // 10
cout << q.back();  // 30

// removing

q.pop();

cout << q.front(); // 20

// checking if empty

cout << q.empty(); // 0 (false)

// size

cout << q.size(); // 2
```

## Complexity

O(1) for all operations.

## Observations

A queue **does not allow random access**.

You can only access the **front** and **back** elements.

To iterate through all elements, you must repeatedly use `front()` and `pop()`.

```cpp
queue<int> q;

q.push(1);
q.push(2);
q.push(3);

while (!q.empty())
{
    cout << q.front() << " ";
    q.pop();
}

// Output:
// 1 2 3
```

---