#if !defined(MEDIAUM_H)
#define MEDIUM_H

#include <iostream>
using namespace std;
#include "Seer.h"

class Medium: public Seer{
  public:
    Medium ();

    string vedi( const Giocatore& g) const override;
};
#endif