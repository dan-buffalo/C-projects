#include <stdio.h>
#include <stdlib.h>

int massimo (int v[], int n) /*funzione che trova il massimo*/
{
    int m = v[0], i;
    if (v[i] > m)
        m = v[i]
        return m;

}
void disegna_barra (int l, int m, int max);
{
    int n_asterischi = (float)l/m * max;

}
void disegna_istogramma (int v[], int n, int max)
{
   int m = massimo (v, n), i;
   for (i = 0; i<n_asterischi; i++)
        disegna_barra (v[i], m, max);
}
int main()
{
    int v[] = {23, 34, 18, 5, 28}
    printf ("%d \n")
    return 0;
}
