#include <stdio.h>
#include <stdlib.h>

/*int setaccio(int n)
{
    int i, j;
    for (j = 2; j<n ;j++)
       {for (i = 0; i<n; i++)
        {
        if (v[i]%j == 0)
            v[i] = 0;
        }
       }
    return v[];
}*/



int main()
{
    int v[100], n, i, j=2;
    printf("Benvenuti nel Crivello di Erastotene\n");
    printf("Inserisci un numero:");
    scanf("%d", &n);
    //inserisco i numeri fino a n nel vettore
    for (i = 0; j<n; i++)
    {
        v[i] = j;
        j++;
        printf("%d ", v[i]);
    }
    /*
    for (j = 2; j<n ;j++)
       {for (i = 0; i<n; i++)
          {
        if (v[i]%j == 0)
            v[i] = 0;
          }
       }
    for (i = 0; i<n; i++)
    {
        if (v[i] != 0)
        printf("%d ,", v[i]);
    }
    printf("Sono i numeri primi dell'intervallo tra 2 e %d\n", n);*/

    return 0;
}
