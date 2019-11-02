#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N 100

int trova_anagramma(char v1[N], char v2[N])
{
    int i=0,j=0, num1[26]={0}, num2[26]={0};

    while(v1[i] != '\0')
    {
        num1[v1[i] - 'a']++;
        i++;
    }

    while(v2[j] != '\0')
    {
        num2[v2[j]- 'a']++;
        j++;
    }
    for (i = 0; i<26; i++)
    {
        if (num1[i] != num2[i])
            return 0;
    }
    return 1;
}


int main()
{
    int check;
    char v1[N], v2[N];
    printf("--------Anagrams Analizer--------\n");
    printf("Enter the first word:");
    gets(v1);
    printf("Enter the second word:");
    gets(v2);
    check = trova_anagramma(v1,v2);

    if (check == 1)
        printf("The words '%s' and '%s' are anagrams.\n", v1, v2);
    else printf("The words '%s' and '%s' are not anagrams.\n", v1, v2);
    return 0;
}
