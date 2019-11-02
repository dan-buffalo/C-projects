#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define N 100

int main()
{
    char a[N];
    int i = 0, count = 0, esclam, j = 0;
    printf("Enter a phrase (0 to end):");
    while (a[i] != '0')
    {
        scanf("%c", &a[i]);
        if (a[i] == '0')
            break;
        a[i] = toupper(a[i]);
        if (a[i] == 'A')
            a[i] = '4';
        else if (a[i] == 'B')
                 a[i] = '8';
        else if (a[i] == 'E')
                 a[i] = '3';
        else if (a[i] == 'I')
                 a[i] = '1';
        else if (a[i] == 'O')
                 a[i] = '0';
        else if (a[i] == 'S')
                 a[i] = '5';
        printf("%c", a[i]);
        i++;
        count++;
    }
    esclam = count/4;

    while (j < esclam)
    {
        printf("!");
        j++;
    }
 return 0;
}
