#include <stdio.h>
#include <stdlib.h>
#define ORE 24
#define SENS 20
/*Una serie di sensori memorizzano i valori dei PM10 nell’aria in posizioni diverse della citt`a, un valore ogni ora
della giornata. Il valore `e un intero che rappresenta i μg/m3

e il valore di sicurezza giornaliero `e di 50μg/m3
, dove il
valore giornaliero `e ottenuto mediando i valori orari escludendo eventuali valori a -1, che indicano lettura fallita. Scrivere
un programma che riempa una matrice di interi adatta a contenere le letture di 20 sensori in una giornata, la cui riga
i-esima rappresenta l’ora i e la colonna j-esima il sensore j, con una serie di valori casuali compresi tra -1 e 100, estremi
inclusi. Successivamente stampi a video il numero di sensori la cui media giornaliera `e superiore al limite di sicurezza.
Per far questo si utilizzino le seguenti funzioni:
• una funzione che ricevuto come parametri una matrice di N righe e 20 colonne e un vettore di 20 elementi, dove N
`e un parametro, scriva nel vettore la media delle colonne della matrice calcolata escludendo eventuali valori a -1
• una funzione che ricevuto come parametri un vettore, la sua lunghezza e un valore di soglia, ritorni il numero di
elementi del vettore il cui valore `e superiore alla soglia*/

int casuale()
{
    int n = rand()%100;
    return n;
}

int main()
{
    printf("----------------------------- Qualita' dell'aria -----------------------------\n");
    int v[SENS][ORE];
    int i=0, j;
    srand(time(NULL));
    int ora[]={24,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
    while(i<ORE)
    {
        printf("%d ", ora[i]);
        i++;
    }
    printf("\n");
    for (i=0;i<SENS;i++)
    {
        for(j=0;j<ORE;j++)
        {
            v[i][j] == casuale();
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }

    return 0;
}
