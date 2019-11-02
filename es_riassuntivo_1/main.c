#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum = 0, m;
    printf("Benvenuti in somma numeri!\n");
    printf("Quanti numeri devo sommare?");
    scanf("%d", &n);
    printf("Inserisci %d numeri\n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &m);
        sum = sum + m;
    }
    printf("La somma dei numeri inseriti è: %d", sum);
    return 0;
}
