#include <stdio.h>
#include <stdlib.h>


    int MCD_euclide(int a, int b)
{
    while (a % b != 0)
    {
        int resto = a%b;
        a = b;
        b = resto;
    }
    return b;
}

int main()
{
    int m, n;
    printf("Inserisci il primo  numero:\n");
    scanf("%d", &n);
    printf("Inserisci il secondo numero:\n");
    scanf("%d", &m);
    printf("L'MCD tra %d e %d e':%d\n", n, m, MCD_euclide(n,m));
    return 0;
}
