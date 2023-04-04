

#include <iostream>
#include "../FileH/Artigliere.h"
using namespace std;

    Artigliere::Artigliere(): PersonaggioMagico("Artigliere", "Villaggio", "Buono"){}
        
    void Artigliere::uccidi( Giocatore& g){
        if(&g && getCont()>0 && g.isVivo())
        {
            g.setMorto();
            decrease();
            cout<<"Il giocatore é artigliere";
        }

    }
    void Artigliere::decrease () {cont--;}
    unsigned int Artigliere::getCont()const {return cont;}
        
    Artigliere:: ~Artigliere(){}