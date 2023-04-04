#if !defined(VEGGENTE_H)
#define VEGGENTE_H

#include <iostream>
using namespace std;
#include "PersonaggioMagico.h"

class Veggente: public PersonaggioMagico
{
  public:
    Veggente();
    string vedi(const Giocatore& g) const override;
    ~Veggente();
};
#endif