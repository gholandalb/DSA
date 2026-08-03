#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int divisivel_por_3(int x)
{
    if (x%3 == 0)
        return 1;
    else
        return 0;
}
int eh_par(int x)
{
    if (x%2 == 0)
        return 1;
    else
        return 0;
}

int filter(int arr[], int resposta[], int n, int (*funcao)(int))
{
    int certas = 0;
    for (int i = 0; i < n; i++)
    {
        if (funcao(arr[i]) == 1)
        {
            resposta[certas] = arr[i];
            certas++;
        }
    }
    return certas;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int resposta[5];

    printf("Digite como voce quer filtrar a array {1, 2, 3, 4, 5}\n1 - Somente pares\n2 - Somente divisiveis por 3\n");
    int op;
    scanf("%d", &op);
    int tamanho = 0;
    if (op == 1)
        tamanho = filter(arr, resposta, 5, eh_par);
    else if (op == 2)
        tamanho = filter(arr, resposta, 5, divisivel_por_3);   
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", resposta[i]);
    }
    return 0;
}