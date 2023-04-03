#if !defined(ARTIGLIERE_H)
#define ARTIGLIERE_H

#include <iostream>
#include "Kill.h"
using namespace std;

class Artigliere: public Kill{

    private:
        unsigned int cont=2;
    public:
        Artigliere();
        
        void uccidi(Giocatore& g);
        void decrease ();
        unsigned int getCont()const ;
        ~Artigliere();

};
#endif
