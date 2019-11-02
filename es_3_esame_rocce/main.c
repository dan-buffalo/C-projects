#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LUNGHEZZA 12
#define ALTEZZA 2

int ContaRocce (int foto[ALTEZZA][LUNGHEZZA])
{
    int count = 0, rocce=0;
    int i, j;
    for(i = 0; i<ALTEZZA; i++)
    {
        count = 0;
        for(j = 0; j<LUNGHEZZA; j++)
        {
            if(foto[i][j] == 0)
                count++;
        }
        if(count >= 10)
            rocce++;
    }
    return rocce;

}

int casuale()
{
    int n = rand()%2;
    return n;
}

int pic[ALTEZZA][LUNGHEZZA]={0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,0,1,1,1,0,1,0};

int main()
{
    printf("----------------- Foto Lunare -----------------\n");
    int i, j, rocks;
    srand(time(NULL));
    /*for(i = 0; i<ALTEZZA; i++)
    {
        for(j = 0; j<LUNGHEZZA; j++)
        {
            pic[i][j] = casuale();
            printf("%d", pic[i][j]);
        }
        printf("\n");
    }*/
    printf("Il numero di rocce presenti e': %d", ContaRocce(pic[ALTEZZA][LUNGHEZZA]));
    return 0;
}
