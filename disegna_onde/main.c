#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    printf("Inserisci un numero naturale: ");
    scanf("%d", &N);
    for (i = 0; i < N; i = i + 1)
    printf(" _    ");
    printf("\n");
    for (i = 0; i < N; i = i + 1)
    printf("/ \\   ");
    printf("\n");
    for (i = 0; i < N; i = i + 1)
    printf("   \\_/");
    return 0;
}
