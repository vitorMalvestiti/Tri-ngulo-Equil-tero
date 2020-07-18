#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
setlocale (LC_ALL,"");


float medida1, medida2, medida3;

printf ("\n Escreva a medida do primeiro lado:");
scanf ("%f", &medida1);
printf ("\n Escreva a medida do segundo lado:");
scanf ("%f", &medida2);
printf ("\n Escreva a medida do terceiro lado:");
scanf ("%f", &medida3);

if ((medida1==medida2) && (medida2==medida3)){
    printf ("\n Os lados sao iguais.");

}else {
printf("\n os lados nao sao iguais.");
}
}






