#include <stdio.h>
#include <stdlib.h>
#define N 16

int main()
{
    int a[N], i, c_sum, l_sum, d_sum;
    for (i = 0; i < N; i++)
         {
             printf("Inserisci un numero naturale tra 1 e 16:\n");
             scanf("%d", &a[i]);
         }
    printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
    printf("%d %d %d %d\n", a[4], a[5], a[6], a[7]);
    printf("%d %d %d %d\n", a[8], a[9], a[10], a[11]);
    printf("%d %d %d %d\n", a[12], a[13], a[14], a[15]);

    printf("\nColoumn sum: ");
    for (i = 0; i < 4; i++)
    {
        c_sum = a[i]+a[i+4]+a[i+8]+a[i+12];
        printf("%d ", c_sum);
    }
    printf("\nLine sum: ");
    l_sum = a[0] + a[1] + a[2] + a[3];
    printf("%d ", l_sum);
    l_sum = a[4] + a[5] + a[6] + a[7];
    printf("%d ", l_sum);
    l_sum = a[8] + a[9] + a[10] + a[11];
    printf("%d ", l_sum);
    l_sum = a[12] + a[13] + a[14] + a[15];
    printf("%d ", l_sum);

    d_sum = a[0]+a[5]+a[10]+a[15];
    printf("\nDiagonal sum:%d", d_sum);
    return 0;
}
