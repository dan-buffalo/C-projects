#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define N 20
int main()
{
    int n, i;
    char s[n][N];
    printf("Quante stringhe vuoi inserire?\n");
    scanf("%d", &n);
    printf("Inserisci %d stringhe!\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%s", &s[i][N]);
    }
    for (i=0; i<n; i++)
    {
        printf("%c", s[i]);
    }
    return 0;
}
