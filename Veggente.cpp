#include <iostream>
using namespace std;
#include "Veggente.h"


Veggente::Veggente(): Seer("Veggente", "Villaggio", "Buono"){}
  
string Veggente::vedi(const Giocatore& g) const{
    if(g.isVivo()&& (g.getPersonaggio().getRuolo()!=getRuolo())){
        return (g.getPersonaggio().getVisto());    
    }else{
        return "\nIl personaggio selezionato è già morto";
  }
}
