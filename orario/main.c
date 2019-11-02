#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Inserire i dati in formato hh.mm\n");
    int a, b;
    printf("Inserire le ore:");
    scanf("%d", &a);
    printf("Inserire i minuti:");
    scanf("%d", &b);

    if (a == 24 || a == 0)
        printf("L'orario convertito e': 12.%d AM", b);
    if (a<12 && a>0)
        printf("L'orario convertito e': 0%d.%d AM", a, b);
    if (a>12 && a<24)
        {a = a - 12;
         printf("L'orario convertito e': 0%d.%d PM", a,b);
        }
    return 0;
}
