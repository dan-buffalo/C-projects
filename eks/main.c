
#include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 int main()
 {

  enum umano { a_casa, al_lavoro, in_vacanza } mario_rossi;

  char stato[20];

  printf("Dov'è Mario Rossi? ");
  scanf("%s", stato);
  if (!strcmp(stato, "A_casa"))
  {
   mario_rossi=a_casa;
  }
  else if (!strcmp(stato, "Al_lavoro"))
  {
   mario_rossi=al_lavoro;
  }
  else if (!strcmp(stato, "In_vacanza"))
  {
   mario_rossi=in_vacanza;
  }

  printf("Status numerico di Mario Rossi: %d", mario_rossi);

  return 0;
 }
