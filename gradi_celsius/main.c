#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float C, F;
    printf("Convertitore Celsius - Fahreneit\n");
    printf("Digitare 1 se si desidera convertire in Farheneit. Viceversa, inserire 2: ");
    scanf("%d", &a);

    if (a == 1)
       {
        printf("Inserisci la temperatura in gradi Celsius: ");
        scanf("%f", &C);
        F = (C * 9/5) + 32;
        printf("La temperatura in gradi Fahrenheit vale %f", F);
       }
   if (a == 2)
        {
         printf("Inserisci la temperatura in gradi Fahrenheit: ");
         scanf("%f", F);
         C = (F - 32) * 5/9;
         printf("La temperatura in gradi Celsius vale %.2f", C);
        }
        return 0;
}
