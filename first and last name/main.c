#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N 50
int main()
{

    char first_name[N], last_name[N];
    int i = 0, count = 0, j;
    printf("Enter your first and last name (add 0 to end):");
    while (first_name[i] != ' ')
    {
        scanf("%c", &first_name[i]);
        if (first_name[i] == ' ')
            break;
        count++;
        i++;
    }
    j = count + 2;
    while (last_name[j] != '0')
    {
        scanf("%c", &last_name[j]);
        if (last_name[j] == '0')
            break;
        printf("%c", last_name[j]);
        j++;
    }

    printf(", ");
    first_name[0] = toupper(first_name[0]);
    printf("%c.", first_name[0]);
    return 0;
}
