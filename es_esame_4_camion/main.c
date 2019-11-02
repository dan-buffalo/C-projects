#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char code[11];
    int in_viaggio; //0 se in viaggio, 1 se non in viaggio.
    float carico_max;
    float carico;
    float price;
} Camion;

float Conteggio(Camion c[], int n) //vettore di camion e il numero di camion
{
    int i;
    float massa = 0;
    for(i = 0;i<n; i++)
    {
        if(c[i].in_viaggio == 0)
            massa = massa + c[i].carico;
    }
    return massa;
}

int CamionPronti(Camion c[], int n, float kili)
{
    int i;
    float massa_attuale;
    for(i = 0;i<n; i++)
    {
        massa_attuale = c[i].carico + kili;
        if (c[i].in_viaggio != 0 && massa_attuale <= c[i].carico_max)
            return i;
    }
}



int main()
{
    Camion camion[]={
    { "ABC123FGH4" ,
    0,
    2000 ,
    1900 ,
    1234567
    },

{
"JKL123FGH4" ,
1,
1800 ,
100 ,
12345
},

{
"QWE123FGH4" ,
1,
3000 ,
1900 ,
2234567
   }
     };
    printf("Camion dell'azienda...\n");
    int i, disponibile;
    int N = ( sizeof ( camion ) / sizeof ( Camion ) );
    float trasporto;
    for(i = 0; i<N; i++)
    {
        printf("Codice Identificativo: %s\n", camion[i].code);
        printf("Carico Massimo: %.1f\n", camion[i].carico_max);
        printf("Carico Attuale: %.1f\n", camion[i].carico);
        printf("Valore della merce caricata: %.1f\n", camion[i].price);
        if(camion[i].in_viaggio == 0)
            {printf("In viaggio: Non disponibile\n");}
        else
        {printf("Non in viaggio: Disponibile\n");}
        printf("------------------------------\n");
    }
    printf("Inserisci il carico da trasportare (Kg): ");
    scanf("%f", &trasporto);
    if (CamionPronti(camion, N, trasporto) == 0)
    printf("Il primo camion disponibile e' il primo, codice: %s\n", camion[0].code);
    else if(CamionPronti(camion, N, trasporto) == 1)
    printf("Il primo camion disponibile e' il secondo, codice: %s\n", camion[1].code);
    else if(CamionPronti(camion, N, trasporto) == 2)
    printf("Il primo camion disponibile e' il terzo, codice: %s\n", camion[2].code);
    printf("La massa totale del carico e': %.1f", Conteggio(camion, N));
    return 0;
}
