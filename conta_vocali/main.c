#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ContaVocali(char s[])
{
    int i, conta=0;
    s = tolower(s);
    for(i=0;i<strlen(s);i++)
    {

        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
            conta++;
    }
    return conta;
}

int main()
{
    char s1[50];
    printf("Enter a sentence: ");
    gets(s1);
    printf("Vowel count of the sentence is: %d", ContaVocali(s1));
    return 0;
}
