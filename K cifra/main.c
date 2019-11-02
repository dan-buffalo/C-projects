#include <stdio.h>
#include <stdlib.h>

int cifra(int n, int k)
{
    int i, cif;
    if (k<= 0 || k>n)
        return -1;
    for (i = 0; i < k; i++)
    {
        cif = n % 10;
        n = n/10;
    }
    return cif;
}




int main()
{
    int n, k;
    printf("Inserisci un numero:\n");
    scanf("%d", &n);
    printf("Quale cifra si vuole estrarre?\n");
    scanf("%d", &k);
    printf("La cifra estratta e':%d", cifra(n,k));
    return 0;
}
