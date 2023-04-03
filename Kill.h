#if !defined(KILL_H)
#define KILL_H

#include <iostream>
#include "Personaggio.h"
#include "Giocatore.h"
using namespace std;

class Kill: public Personaggio{

    public:
        Kill(string r, string s, string v);
        
        virtual void uccidi( Giocatore& g)  =0;
        
        virtual ~Kill();

};
#endif

