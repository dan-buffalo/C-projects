#include <stdio.h>
#include <stdlib.h>
#define MAZZO 52

typedef enum{
    CUORI,
    QUADRI,
    FIORI,
    PICCHE
} Seme;

typedef enum{
    PAYPAL,
    CARTA DI CREDITO
} Pagamento;

int random_carta()
{
    int n = rand()%13 +1;
    return n;
}

int random_seme()
{
    int n = rand()%4 +1;
    return n;
}

char carta_seme(int random_seme())
{
    int n = random_seme();
    Seme s;
    switch (n){
    case 1:
        s = CUORI;
        break;
    case 2:
        s = QUADRI;
        break;
    case 3:
        s = FIORI;
        break;
    case 4:
        s = PICCHE;
        break;
    }
}

int main()
{
    int i;
    printf("------------ 21 Black Jack ------------\n");
    printf("Menu\n");
    printf("\n1) Nuova partita");
    printf("\n2) Inserisci saldo");
    printf("\n0) Esci");
    int scelta;
    scanf("%d", &scelta);
    switch (scelta){
    case 1:
        break;
    case 2:



    }
    return 0;
}
