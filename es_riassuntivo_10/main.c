#include <stdio.h>
#include <stdlib.h>

int qualityPoints(float media)
{
    if (media<60)
        return 0;
    else if (media<=69 && media>=60)
        return 1;
    else if (media>=70 && media<=79)
        return 2;
    else if (media>=80 && media<=89)
        return 3;
    else if (media>=90 && media<=100)
        return 4;
}

int main()
{
    float media;
    int m;
    printf("--------------------- Calcolo Media Voti ---------------------\n");
    printf("Inserisci la media dei tuoi voti in centesimi: \n");
    scanf("%f", &media);
    return qualityPoints(media);
}
