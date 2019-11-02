#include <stdio.h>
#include <stdlib.h>
 #define N 100

void elimina (int v[],int n, int pos)
{
    int i;
    for (i = pos; i > n-1; i++)
    v[i-1] = v[i];
}
int main()
{
    int m[N][N], i;
    int r,c;
    int posr, posc;
    int v[N], i;
    int n, pos;
    printf("Inserisci le dimensioni della matrice: ");
    scanf("%d", &r);
    scanf("%d", &c);
    for (i = 0; i < r; i++)
        v[i] = rand()%100;
        for (j = 0; j < c; j++)
        for (i = 0; i < n; i++)
        printf("%d", v[i]);
    printf("Dimmi la posizione da cui eliminare un elemento: ");
    scanf("%d", &pos);
    elimina (v,n,pos);
    n--;
    for (i = 0; i < n; i++)
        printf("%d", v[i]);
    return 0;

}
