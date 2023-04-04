//
// Created by canai on 04/04/2023.
//

#ifndef PROGETTO_PERSONAGGIOMAGICO_H
#define PROGETTO_PERSONAGGIOMAGICO_H
#include "Giocatore.h"

class PersonaggioMagico: public Personaggio{

public:
    PersonaggioMagico();
    PersonaggioMagico(string n, string squad, string vist);


    virtual void uccidi( Giocatore& g);

    virtual string vedi(const Giocatore& g) const;

    virtual void salva(Giocatore& g) const;
};


#endif //PROGETTO_PERSONAGGIOMAGICO_H
