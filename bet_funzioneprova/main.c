#include <stdio.h>
#include <stdlib.h>

int random()
{
    int n;
    n = rand()%10;
    return n;
}
float moltiplicatorex10()
{
    int n;
    n = rand()%44 + 10;
    return n;
}
int main()
{
    float n, win, loss, mult, quota = 100;
    printf("----Bet star----\n");
    printf("Quota di partenza: 100 Euro\n");
    srand(time(NULL));
    do{
        mult = moltiplicatorex10() / 10;
        printf("Moltiplicatore: x%1.1f\n", mult);
    do{printf("Immettere l'ammontare della prima puntata:\n");
    scanf("%f", &n);
    if(n>quota || n<0)
        printf("Non è possibile giocare tale somma! Reinserire \n");
    }while (n>quota);
    if (random() < 5)
    {
        win = n*mult;
        printf("Vincita: %.2f\n", win);
        quota = quota + win;
        printf("Il tuo portafogli: %.2f\n", quota);
    }
    else
    {
        printf("Perdita: -%.2f\n", n);
        quota = quota - n;
        if (quota <= 0)
        {
            printf("Non hai piu' soldi!\n");
            break;
        }
        printf("Il tuo portafogli: %.2f\n", quota);
    }
    printf("Premi 'x' per uscire, INVIO per rigiocare!\n");
    getchar();
    } while (getchar()!='x');
    return 0;
}
