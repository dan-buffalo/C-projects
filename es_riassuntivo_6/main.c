#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[]={2, 4, 6, 8, 10};
    int v2[]={3, 5, 7, 9, 11};
    int v3[]={6, 10, 14, 18, 22};
    int i, l, m, n;
    printf("Insiemi:\n");
    printf("a) ");
    for(i = 0; i<5; i++)
    {
        printf("%d ", v1[i]);
    }
    printf("\nb) ");
    for(i = 0; i<5; i++)
    {
        printf("%d ", v2[i]);
    }
    printf("\nc) ");
    for(i = 0; i<5; i++)
    {
        printf("%d ", v3[i]);
    }
    srand(time(NULL));
    printf("\na) %d", v1[rand()%4]);
    printf("\nb) %d", v2[rand()%4]);
    printf("\nc) %d", v3[rand()%4]);
    return 0;
}
