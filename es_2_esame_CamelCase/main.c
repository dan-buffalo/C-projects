#include <stdio.h>
#include <stdlib.h>
#define N 50
#include <string.h>
/*Alcune convenzioni di programmazione prevedono di scrivere i nomi di variabili
e funzioni usando la notazione Snake Case (es. variabile_in_notazione_snake_case),
mentre altre utilizzano la notazione Camel Case (VariabileInNotazioneCamelCase).
Scrivere una funzione che prenda come parametro una stringa che rappresenta un nome
di variabile in notazione Snake Case e la modifichi in modo che rappresenti
lo stesso nome usando la convenzione Camel Case.
Se ad esempio la stringa passata fosse ”conto corrente attuale” dovr`a
essere modificata in ”ContoCorrenteAttuale”. Si scriva successivamente un programma
che chieda all’utente di inserire una stringa contenente un nome in Snake Case
(si supponga che il nome inserito sia nella forma corretta) e, utilizzando
la funzione precedentemente definita, la modifichi in Camel Case e la stampi a video.*/

void CamelCase(char s[])
{
    int i, n;
    n = strlen(s);
    printf("%c", toupper(s[0]));
    for (i = 1; i<n; i++)
    {

        if(s[i] != '_')
        {
            if(s[i-1] == '_')
                printf("%c", toupper(s[i]));
            else
            printf("%c", s[i]);
        }
    }
}

int main()
{
    char s1[N];
    printf("-------------------- Snake Case To Camel Case --------------------\n");
    printf("Enter a snake_case string: ");
    scanf("%s", s1);
    CamelCase(s1);
    return 0;
}
