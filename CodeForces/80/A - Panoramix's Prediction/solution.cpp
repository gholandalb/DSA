#include <bits/stdc++.h>
 
using namespace std;
 
int is_prime(int num, int n)
{
    if (n == 1 || n == 0)
        return 1;
    else if (num%n == 0)
        return 0;
    return is_prime(num, n-1);
}
 
int next_prime(int n, int i)
{
    if (is_prime(n + i, n + i - 1) == 1)
        return n + i;
    return next_prime(n, i + 1);
}
 
 
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    if (n2 == next_prime(n1, 1))
        cout << "YES";
    else 
        cout << "NO";
}