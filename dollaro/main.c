#include <stdio.h>
#include <stdlib.h>

int main()
{
    int money, b20, b10, b5, b1, nuovo;
    printf("Inserisci l'ammontare di denaro: \n");
    scanf("%d", &money);
    b20 = money/20;
    nuovo = money - (b20*20);
    b10 = nuovo/10;
    nuovo = nuovo - (b10*10);
    b5 = nuovo/5;
    nuovo = nuovo - (b5*5);
    b1 = nuovo/1;
    printf("$20 bills:%d\n$10 bills:%d\n$5 bills:%d\n$1 bills:%d\n", b20, b10, b5, b1);
    return 0;
}
