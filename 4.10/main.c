#include <stdio.h>
#include <stdlib.h>

#define N 1000

int main()
{
    int n, i = 0, j, cnt = 0, a[N];
    int media;
    while (a[i] != 9999)
    {
        printf("Inserisci un numero (9999 per concludere):");
        scanf("%d", a[i]);
        i++;
        cnt++;
    }
    return 0;
}
