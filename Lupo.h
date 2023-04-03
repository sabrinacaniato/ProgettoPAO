#if !defined(LUPO_H)
#define LUPO_H

#include <iostream>
#include "Kill.h"
using namespace std;

class Lupo: public Kill{

    public:
        Lupo();
        
        virtual void uccidi( Giocatore& g);
        
        virtual ~Lupo();

};
#endif

