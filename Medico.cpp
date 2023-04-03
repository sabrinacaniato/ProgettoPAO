
#include <iostream>
#include "Medico.h"
using namespace std;

    Medico::Medico(): Saver("Medico", "Villaggio", "Buono"){}
        
    void Medico:: salva(Giocatore& med, Giocatore& g) const{
        if(med.getPersonaggio().getRuolo()==getRuolo()){
            if((&g)&&(g.getVivo()>=0)&&(g.getPersonaggio().getRuolo()!=getRuolo())){
                g.setSalvato();
            }
        }
    }

    Medico:: ~Medico(){}



