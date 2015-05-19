#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[], char **envp[]) {

printf("\nAusgabe der Umgebung \n");
while (*envp != 0)
printf("%s\n", *envp++);

char *umgebung;
char eingabe[20];

setenv("BSPRAKTIKUM","2015",0);
printf("\nUmgebungsvariable gesetzt!");
printf("\n\nBitte eine eine Umgebungsvariable eingeben: ");
scanf("%s",&eingabe);
umgebung = getenv(eingabe);

if (NULL != umgebung)
printf("\nDer Inhalt von BSPRAKTIKUM lautet: %s", umgebung);

else 
printf("\nDie Variable %s wurde nicht gefunden", eingabe);

return 0;
}


