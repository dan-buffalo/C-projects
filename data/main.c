#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, m, gg;
    printf("Inserisci la data (gg/mm/yyyy):");
    scanf("%d/%d/%d", &gg,&m,&a);
    printf("Hai inserito la data:%d%d%d", a, m, gg);
    return 0;
}
