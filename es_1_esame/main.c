#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
/*Scrivere un programma che generi 100 numeri casuali compresi
tra 1 e 10000 e trovi qual `e il numero pari
di valore massimo e il numero dispari di valore massimo.
Successivamente il programma dovr`a stampare i due numeri
trovati e il valore assoluto della loro differenza.
*/

int casuale()
{
    int n = rand()%10000 + 1;
    return n;
}

int main()
{
    printf("-----------Generatore Numeri Casuali -----------\n");
    int i, j, n;
    int max_pari =0, max_dispari=0;
    int sub;
    srand(time(NULL));
    for (i=0; i<N; i++)
    {
        n = casuale();
        printf("%d\n", n);
        if(n%2 == 0 && n>max_pari)
            max_pari = n;
        else if (n%2 !=0 && n>max_dispari)
            max_dispari = n;

    }
    printf("Il numero pari maggiore e' %d, mentre il numero dispari maggiore e' %d\n", max_pari, max_dispari);
    if (max_pari > max_dispari)
       sub = max_pari - max_dispari;
    else sub = (max_dispari - max_pari);

    printf("La differenza tra i due numeri e' %d", sub);
    return 0;
}
