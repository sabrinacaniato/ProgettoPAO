#if !defined(SAVER_H)
#define SAVER_H

#include <iostream>
#include "Personaggio.h"
#include "Giocatore.h"
using namespace std;

class Saver: public Personaggio{

    public:
        Saver(string r, string s, string v);
        
        virtual void salva(Giocatore& med, Giocatore& g) const =0;
        
        virtual ~Saver();

};
#endif

