#include <stdio.h>
#include <stdlib.h>
#define N 10
#define M 26

//created by Davide D'Angelo INGELT
//IMPLEMENTARE CON UN SISTEMA DI GIOCO D'AZZARDO: FAR CAPIRE QUANTO SIA FACILE PERDERE SOLDI!

void stampa(char v[N][N])
{
    int i, j;
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            printf("%c", v[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int direzione()
{
    int n;
    n = rand()%4;  //0 su, 1 destra, 2 giù, 3 sinistra
    return n;
}

int partenza1()
{
    int k;
    k = rand()%10;
    return k;
}

int partenza2()
{
    int l;
    l = rand()%10;
    return l;
}

int main()
{
    const char c[M]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'X', 'Y', 'W', 'Z'};
    int i, j, k, l, p, dir;
    char v[N][N];
    printf("Benvenuti in cammino casuale!\n");
    printf("Premi INVIO per continuare...");
    getchar();
    srand(time(NULL));
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            v[i][j] = '.';
            printf("%c", v[i][j]);
        }
        printf("\n");
    }
    printf("Premi INVIO per continuare...");
    getchar();
    k = partenza1();
    l= partenza2();
    v[k][l] = 'A';
    for (i=0; i<N; i++)
     {
       for (j=0; j<N; j++)
        {
           printf("%c", v[i][j]);
        }
        printf("\n");
     }
    printf("Premi INVIO per continuare...");
    getchar();
    for(p=1;p<M;p++)
    {
       dir = direzione();
       if(dir == 0)
       {
           printf("Direzione di %c: verso l'alto\n", c[p]);
           if(v[k-1][l] == '.')
           {
               v[k-1][l] = c[p];
               for (i=0; i<N; i++)
                    {
                      for (j=0; j<N; j++)
                       {
                          printf("%c", v[i][j]);
                       }
                      printf("\n");
                    }
               k = k-1;
           }
        else {printf("Non e' possibile proseguire!\n");
              break;       }
       }
       else if(dir == 1)
       {
           printf("Direzione di %c: verso destra\n", c[p]);
           if (v[k][l+1] == '.')
           {
               v[k][l+1] = c[p];
               for (i=0; i<N; i++)
                    {
                      for (j=0; j<N; j++)
                       {
                          printf("%c", v[i][j]);
                       }
                      printf("\n");
                    }
               l = l+1;
           }
           else break;
       }
       else if(dir == 2)
       {
           printf("Direzione di %c: verso il basso\n", c[p]);
           if (v[k-1][l] == '.')
           {
               v[k-1][l] = c[p];
               for (i=0; i<N; i++)
                    {
                      for (j=0; j<N; j++)
                       {
                          printf("%c", v[i][j]);
                       }
                      printf("\n");
                    }
               k = k-1;
           }
           else {printf("Non e' possibile proseguire!\n");
              break;       }
       }
       else if(dir == 3)
       {
           printf("Direzione di %c: verso sinistra\n", c[p]);
           if (v[k][l-1] == '.')
           {
               v[k][l-1] = c[p];
               for (i=0; i<N; i++)
                    {
                      for (j=0; j<N; j++)
                       {
                          printf("%c", v[i][j]);
                       }
                      printf("\n");
                    }
               l= l-1;
           }
           else {printf("Non e' possibile proseguire!\n");
              break;       }
       }

       printf("Premi INVIO per continuare...");
       getchar();
    }
    return 0;
}
