#if !defined(VEGGENTE_H)
#define VEGGENTE_H

#include <iostream>
using namespace std;
#include "Seer.h"

class Veggente: public Seer
{
  public:
    Veggente();
    string vedi(const Giocatore& g) const override;
};
#endif