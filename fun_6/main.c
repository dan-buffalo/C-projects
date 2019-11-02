#include <stdio.h>
#include <stdlib.h>

int funzione (int n)
{
    int sum;
    sum = 3*(n*n*n*n*n) + 2*(n*n*n*n) - 5*(n*n*n) - (n*n) + 7*n - 6;
    return sum;
}
int main()
{
    int x;
    printf("Enter an integer number:");
    scanf("%d", &x);
    printf("Your function output is: %d", funzione(x));
    return 0;
}
