#include <stdio.h>
#include <stdlib.h>




int first_launch ()
{
    return rand()%6+1;
}

int second_launch ()
{
    return rand()%6+1;
}
int somma_dadi()
{
    return first_launch()+second_launch();
}

int main()
{
    printf("Welcome to the craps game!\n");
    int i;

    while (i > 0)
    {
        srand(time(NULL));
        printf("%d  \n", first_launch());
        printf("%d  \n", second_launch());
        printf("%d  \n", somma_dadi());
    if (somma_dadi() == 7 || somma_dadi() == 11)
        {printf("You win!\n");
        break;}
    else if(somma_dadi() == 2 || somma_dadi() == 3 || somma_dadi() == 12)
    {printf("You lose!\n");
     break;}
    else
    {
        printf("Target\n");
        i = 1;
    }}
    return 0;
}
