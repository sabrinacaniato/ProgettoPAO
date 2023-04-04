#if !defined(MEDICO_H)
#define MEDICO_H

#include <iostream>
//#include "Saver.h"
#include "PersonaggioMagico.h"
using namespace std;

class Medico: public PersonaggioMagico{
    
    public:
        Medico();
        
        void salva(Giocatore& g) const;
        
        ~Medico();

};
#endif

