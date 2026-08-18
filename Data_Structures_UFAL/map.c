#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int dobrar(int x)
{
    return x*2;
}

int somar_dez(int x)
{
    return x + 10;
}

int elevar_ao_quadrado(int x)
{
    return pow(x, 2);
}

void map(int inicial[], int final[], int n, int (*funcao)(int))
{
    for (int i = 0; i < n; i++)
        final[i] = funcao(inicial[i]);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int resposta[5];

    printf("Digite o que fazer com a array {1, 2, 3, 4, 5}\n1 - dobrar\n2 - somar 10 a cada elemento\n3 - elevar ao quadrado\n");
    int op;
    scanf("%d", &op);
    if (op == 1)
        map(arr, resposta, 5, dobrar);
    else if (op == 2)
        map(arr, resposta, 5, somar_dez);
    else if (op == 3)
        map(arr, resposta, 5, elevar_ao_quadrado);    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", resposta[i]);
    }
    return 0;
}