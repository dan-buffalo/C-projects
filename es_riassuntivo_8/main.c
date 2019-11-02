#include <stdio.h>
#include <stdlib.h>
#define N 32767
// parte a)

int intero (int a, int b)
{
    int quoziente = a/b;
    return quoziente;
}

//parte b)
int resto(int a, int b)
{
    int resto = a%b;
    return resto;
}

//parte c)
int creazione_numero()
{
    int quoziente, rest, n, numero;
    srand(time(NULL));
    n = rand()%(N-1)+1;
    quoziente = intero(N, n);
    rest = resto(N, n);
    numero = quoziente + rest;

}

void separatore(int a)
{
    int i = 0, resto, v[5];
    while(a!=0)
    {
        resto = a%10;
        v[i] = resto;
        printf("%d  ", v[i]);
        a = a/10;
        i++;
    }
    return 0;
}

int main()
{
    int num;
    printf("------------ Separatore di Cifre ------------\n");
    num = creazione_numero();
    separatore(num);
    return 0;
}
