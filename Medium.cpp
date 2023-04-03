#include <iostream>
using namespace std;
#include "Medium.h"

    Medium:: Medium (): Seer("Medium", "Villaggio", "Buono"){}

    string Medium::vedi(const Giocatore& g) const{
        if(!g.isVivo()) {
            if(g.getPersonaggio().getRuolo()!=getRuolo()){
                return (g.getPersonaggio().getRuolo()); 
            }else{
                return "\nIl personaggio selezionato è un veggente";
            }
        }else{
            return "\n Il personaggio selezionato è ancora vivo";
        }
    }
