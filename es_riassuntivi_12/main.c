#include <stdio.h>
#include <stdlib.h>

int verifica(int v[], int i)
{
    int j;
    for (j=0;j<i;j++)
    {
        if(v[j] == v[i])
        v[j] = 0;
    }
    return 0;
}


int main()
{
    int v[20], i;
    printf("Inserire 20 numeri compresi tra 10 e 100:");
    for (i=0; i<20;i++)
    {
        scanf("%d", &v[i]);
        verifica(v[i], i);
    }
    for (i=0;i<20;i++)
    {
        if (v[i] != 0)
            printf("%d", v[i]);
    }
    return 0;
}
