#ifndef KONTO_H // guard
#define KONTO_H

class Konto
{
 
 public:

  Konto()  // Konstruktor
    {
      kontostand = 0;
    };

  ~Konto(){}; // Destruktor

  // Methoden
  void einzahlen(double betrag);
  void abheben(double betrag);
  
  double getKontostand(); // der Kontostand des Kontos

  protected:
  double kontostand; 

};

#endif // end of guard
