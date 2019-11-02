#include <stdio.h>
#include <stdlib.h>
void spazio()
{
    printf("\n");
    printf("\n");
}
void stampa_triangolo1()
{
    int i, j;
    char axe = '*';
    for(i=0; i<=10 ;i++)
    {
        for(j=0; j<i;j++)
        {
            printf("%c", axe);
        }
        printf("\n");
    }
}
void stampa_triangolo2()
{
    int i, j;
    char axe = '*';
    for(i=0; i<10 ;i++)
    {
        for(j=10; j>i;j--)
        {
            printf("%c", axe);
        }
        printf("\n");
    }
}
void stampa_triangolo3()
{
    int i, j, k;
    char axe = '*';
    for(i=0; i<=10 ;i++)
    {
        for(j=0;j<)
        printf("\n");
    }
}

int main()
{
    printf("Stampa Triangolo");
    stampa_triangolo1();
    spazio();
    stampa_triangolo2();
    spazio();
    stampa_triangolo3();
    return 0;
}
