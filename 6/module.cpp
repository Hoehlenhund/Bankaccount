#include "module.h"
#include <stdio.h>


void Konto::einzahlen(double betrag)
{
  kontostand += betrag;
}

void Konto::abheben(double betrag)
{
      kontostand -= betrag;
}
double Konto::getKontostand()
{
  return kontostand;
}
