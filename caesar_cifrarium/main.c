#include <stdio.h>
#include <stdlib.h>
#define N 100

int main()
{
    int shift, i, ch, ne;
    char array1[N];
    printf("THIS IS");
    printf("\n\n");
    printf("--------Caesar Cifrarium--------\n\n");
    printf("Enter message to be encrypted:");
    gets(array1);
    printf("Enter shift amount (1-25):");
    scanf("%d", &shift);
    while((ch = getchar()) != '\0')
          {
            ne = ((ch - 'a') + shift)%26 + 'a';
            printf("%c", ch);
          }
    return 0;
}
