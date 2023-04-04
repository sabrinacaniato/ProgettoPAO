#if !defined(MEDIUM_H)
#define MEDIUM_H

#include <iostream>
using namespace std;
#include "PersonaggioMagico.h"

class Medium: public PersonaggioMagico{
  public:
    Medium ();

    string vedi( const Giocatore& g) const override;

    ~Medium();
};
#endif