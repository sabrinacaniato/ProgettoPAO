

#include <iostream>
#include "Artigliere.h"
using namespace std;

    Artigliere::Artigliere(): Kill("Artigliere", "Villaggio", "Buono"){}
        
    void Artigliere::uccidi( Giocatore& g){
        if(&g && getCont()>0 && g.isVivo())
        {
            g.setMorto();
            decrease();
            cout<<"Il giocatore bisogna aggiungere cose é artigliere";
        }

    }
    void Artigliere::decrease () {cont--;}
    unsigned int Artigliere::getCont()const {return cont;}
        
    Artigliere:: ~Artigliere(){}