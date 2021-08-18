#include "module2.h"
#include "module.h"
#include <stdio.h>

void giroKonto::abheben(double betrag)
{
  
  int d = -dispo_;
  
  if((kontostand-betrag )>= 0)
    {
      kontostand -= betrag;
    }
  else if((kontostand-betrag)>= d)
    {
      kontostand -= betrag;
    }
  else if((kontostand-betrag)< d)
    {
      printf("\nSie können ihren DispoDisp von %.2f€ nicht überschreiten.\n", getDispo());
    }

};
