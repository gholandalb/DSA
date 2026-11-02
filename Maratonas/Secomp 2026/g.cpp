#include <bits/stdc++.h>
using namespace std;

int fat(int n)
{
    if(n ==0 || n == 1)
    {
        return 1;
    }
    return n * fat(n-1);
}

int main(){
    int n; cin >> n;
    int k = (n+1)/2;

    if(n ==1)
       cout << 2;
    else{
        int fato = k;
        long long int soma = 1;
        for(int i= n; k > 0; i--)
        {
            soma *= i;
            k--; 
            //cout << soma << endl;
        }

        cout << (soma/fat(fato))*2; 
    }
    
    return 0;
}
