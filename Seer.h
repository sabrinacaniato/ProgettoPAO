#if !defined(SEER_H)
#define SEER_H

#include <iostream>
#include "Personaggio.h"
#include "Giocatore.h"
using namespace std;

class Seer: public Personaggio{

    public:
        Seer(string r, string s, string v);
        
        virtual string vedi(const Giocatore& g) const =0;
        
        virtual ~Seer();

};
#endif

