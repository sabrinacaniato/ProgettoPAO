
#include <iostream>
#include "../FileH/Medico.h"
using namespace std;

    Medico::Medico(): PersonaggioMagico("Medico", "Villaggio", "Buono"){}
        
  /*  void Medico::salva(Giocatore& med, Giocatore& g) const{
        if(med.getPersonaggio().getRuolo()==getRuolo()){
            if((&g)&&(g.getVivo()>=0)&&(g.getPersonaggio().getRuolo()!=getRuolo())){
                g.setSalvato();
            }
        }
    }*/
  void Medico::salva(Giocatore& g) const{
      if(g.getIDg()!= 3){
          if((&g)&&(g.getVivo()>=0)){
              g.setSalvato();
          }
      }
  }
    Medico::~Medico(){}



