#include <stdio.h>
#include <stdlib.h>
#define sentinella 9999

int main()
{
    int v[20], n, i=0, count = 0, sum = 0;
    float media;
    printf("Calcola medie!\n");
    printf("Inserisci i numeri a cui fare la media(9999 per concludere la sequenza\n");
    while (n != 9999)
    {
        scanf("%d", &n);
        if (n == sentinella)
            break;
        v[i] = n;
        count++;
        i++;
    }
    for(i=0; i<count; i++)
    {
        sum = sum + v[i];
    }
    media = sum/count;
    printf("La media tra i numeri inseriti e': %f", media);
    return 0;
}
