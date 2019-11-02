#include <stdio.h>
#include <stdlib.h>
float virgola(float a, float b, float c)
{
    float min;
    if (a<b && a<c)
        min = a;
    else if(b<a && b<c)
        min = b;
    else min = c;
    return min;

}
int main()
{
    float v[3], minimo;
    int i;
    printf("----------- Minimo tra tre numeri a virgola mobile -----------\n");
    printf("Inserisci tre numeri a virgola mobile:\n");
    for (i = 0; i< 3; i++)
    {
        scanf("%f", &v[i]);
    }
    minimo = virgola(v[0], v[1], v[2]);
    printf("Il numero a virgola mobile piu' piccolo e': %1.2f", minimo);
    return 0;
}
