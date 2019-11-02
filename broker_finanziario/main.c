#include <stdio.h>
#include <stdlib.h>

int main()
{float tariffa; //verifico che la tariffa sia nel range
 do
{
    printf ("Inserire la tariffa: ");
    scanf ("%f", &tariffa);
} while (tariffa < 39.0);
 if (tariffa <= 2500.0)
{   float commissione;
    commissione = (tariffa/100)*1.7 + 30.0;
    printf ("La commissione applicata e %f", commissione);
    }
}
