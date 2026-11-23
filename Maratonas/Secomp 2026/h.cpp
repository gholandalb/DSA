#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int soma = 0;
    int ultima_soma = 0;
    int eventos = 0; 
    for(int i = 0;i < n ; i++ )
    {
        int x; cin >> x;
        if(soma + x > 0)
        {
            soma+=x;
            eventos +=1;
        }
    }
    return 0;

}

