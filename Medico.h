#if !defined(MEDICO_H)
#define MEDICO_H

#include <iostream>
#include "Saver.h"
#include "Giocatore.h"
using namespace std;

class Medico: public Saver{
    
    public:
        Medico();
        
        virtual void salva(Giocatore& med, Giocatore& g) const;
        
        virtual ~Medico();

};
#endif

