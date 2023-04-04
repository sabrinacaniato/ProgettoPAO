#if !defined(LUPO_H)
#define LUPO_H

#include <iostream>
#include "PersonaggioMagico.h"
using namespace std;

class Lupo: public PersonaggioMagico{

    public:
        Lupo();
        
        virtual void uccidi(Giocatore& g);
        
        virtual ~Lupo();

};
#endif

