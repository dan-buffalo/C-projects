#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int multiple(int a, int b)
{
    int resto = b%a;
    if(resto == 0)
        return 1;
    return 0;

}
int main()
{
    int n, i, j, x[2], verifica;
    printf("Coppie Multiple\n");
    printf("Quante coppie vuoi inserire?\n");
    scanf("%d", &n);
    for (i=0; i<n; i++)
        {
            printf("Inserisci le coppie:\n");
            for(j=0; j<2; j++)
            {
                scanf("%d", &x[j]);
            }
            verifica = multiple(x[0], x[1]);
            if (verifica == 0)
                {
                    printf("%d non e' multiplo di %d\n", x[1], x[0]);
                }
            else printf("%d e' multiplo di %d\n", x[1], x[0]);
        }
    return 0;
}
