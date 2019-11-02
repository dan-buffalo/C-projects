#include <stdio.h>
#include <stdlib.h>
/*Scrivere un programma che presi in ingresso due valori L e R,
stampi R quadrati di lato L, senza la base,come nel disegno
sottostante in cui i valori letti sono L = 4 e R = 3
(la distanza tra un quadrato e il successivo `e uguale a L).
Si supponga che sia L che R siano strettamente positivi,
quindi non si faccia nessun controllo in tal senso e in
particolare che L≥2. La stampa deve essere realizzata da
una funzione che accetti come parametri L e R.*/

void StampaQuadrati(int L, int R)
{
    int i,j, k, m;
        for(i=0;i<R;i++)
        {
            for(j= 0;j<L; j++)
            {
                printf("*");
            }
            for(k=0;k<L; k++)
            {
                printf(" ");
            }
        }
        printf("\n");
        for(m=0;m<L-1;m++)
        {
        for(i=0;i<R;i++)
        {
            printf("*");
            for(j=0;j<L-2;j++)
            {
                printf(" ");
            }
            printf("*");
            for(k = 0;k<L; k++)
            {
                printf(" ");
            }
        }
        printf("\n");
        }
}

int main()
{
    int l, r;
    printf("Inserisci il numero di quadrati da disegnare: ");
    scanf("%d", &r);
    printf("Inserisci il lato dei quadrati: ");
    scanf("%d", &l);
    StampaQuadrati(l,r);
    return 0;
}
