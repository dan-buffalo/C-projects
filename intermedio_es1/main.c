#include <stdio.h>
#include <stdlib.h>
#define MIN 0
#define MAX 100

int main()
{
    printf("Inserisci 10 numeri:");
    int i, n, max = -1;
    for (i = 0;i<10; i++)
    {
        scanf("%d", n);
        if(n>MIN && n<MAX && n>max)
        {
            max = n;
        }
    }
    return 0;
}
