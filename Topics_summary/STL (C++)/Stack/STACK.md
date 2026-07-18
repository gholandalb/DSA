# Stack

A stack stores elements following the **LIFO (Last In, First Out)** principle. The last element inserted is the first one removed.

## Declare

```cpp
stack<int> st;
```

## Essential

```cpp
// inserting

st.push(10);
st.push(20);
st.push(30);

// accessing the top element

cout << st.top(); // 30

// removing the top element

st.pop();

cout << st.top(); // 20

// checking if empty

cout << st.empty(); // 0 (false)

// size

cout << st.size(); // 2
```

## Complexity

The complexity of all commands are O(1)
## Observations 

A stack **does not allow random access**. You can only access the top element.

To iterate through all elements, you must repeatedly use `top()` and `pop()`.

```cpp
stack<int> st;

st.push(1);
st.push(2);
st.push(3);

while (!st.empty())
{
    cout << st.top() << " ";
    st.pop();
}

// Output:
// 3 2 1
```

---