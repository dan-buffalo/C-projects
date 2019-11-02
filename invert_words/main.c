#include <stdio.h>
#include <stdlib.h>

#define N 150

int main()
{
    char v[N];
    int i=0, count = 0;
    printf("Enter a sentence:");
    while (v[i] != '\0')
    {
        v[i] = getchar();
        printf("%s", v[i]);
        i++;
        count++;
    }
    return 0;
}
