#include "module.h"
#include "module2.h"
#include <stdio.h>

int main()
{
  giroKonto giro(100);
  giro.einzahlen(1000);
  for (int i=0; i<3; i++)
    {giro.abheben(400);};
  printf("Ihr aktueller Kontostand beträgt: %.2f€\n\n", giro.getKontostand());

  giroKonto puetin(100000);
  puetin.einzahlen(1000);
    for (int i=0; i<3; i++)
    {puetin.abheben(400);};
  printf("BärenPutin aktueller Kontostand beträgt: %.2f€\n\n", puetin.getKontostand());

};
