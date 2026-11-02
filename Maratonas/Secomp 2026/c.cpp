#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long total = n;
    for (int i = n - 1; i > n - 50; i--)
    {
        total *= i;
        total %= (1000000000 + 7);
    }
    cout << total;
    return 0;
}