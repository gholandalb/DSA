#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int minutos[2000] = {0};
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        string tempo;
        cin >> tempo;
        int hora, min;
        hora = tempo[1] - '0' + (tempo[0] - '0')*10;
        
        min = tempo[4] - '0' + (tempo[3] - '0')*10;

        int total = hora*60 + min;

        string tempof;
        cin >> tempof;
        int horaf, minf;
        horaf = tempof[1] - '0' + (tempof[0] - '0')*10;
        minf = tempof[4] - '0' + (tempof[3] - '0')*10;

        int totalf = horaf*60 + minf;

        for (int i = total; i <= totalf; i++)
        {
            minutos[i]++;
            ans = max(ans, minutos[i]);
        }
    }
    cout << ans;
    return 0;
}

