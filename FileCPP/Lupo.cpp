
#include <iostream>
#include "../FileH/Lupo.h"
using namespace std;

    Lupo::Lupo(): PersonaggioMagico("Lupo", "Lupi", "Cattivo"){}
        
    void Lupo::uccidi( Giocatore& g){
        if(g.isVivo() && (g.isSalvato()!=true)){
            g.setMorto();
        }else if(!g.isVivo()){
            cout<<g.getNome()<<" e' gia' morto";
        }

    }
        
    Lupo:: ~Lupo(){}


