#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Minimum\n");
    int ver, n, i, min=1000;
    printf("Quanti numeri vuoi verificare?\n");
    scanf("%d", &ver);
    printf("Inserisci %d numeri!\n", ver);
    for(i=0; i<ver; i++)
    {
        scanf("%d", &n);
        if(n<min)
            min = n;
    }
    printf("Il numero piu' piccolo della sequenza e': %d", min);
    return 0;
}
