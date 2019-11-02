#include <stdio.h>
#include <stdlib.h>
#define max 30
int main()
{
    printf("Calcolo pari\n");
    int sum=0, i;
    for(i = 2; i<max; i=i+2)
    {
        sum = sum + i;
    }
    //printf("La somma dei numeri pari tra 2 e 30 e': %d", sum);
    return sum;
}
