//
// Created by canai on 04/04/2023.
//

#include "FileH/PersonaggioMagico.h"
#include <string>

PersonaggioMagico::PersonaggioMagico(): Personaggio(){}
PersonaggioMagico:: PersonaggioMagico(string n, string squad, string vist): Personaggio(n, squad, vist){}


void PersonaggioMagico::uccidi( Giocatore& g) {}

void PersonaggioMagico::salva(Giocatore& g)const{}

string PersonaggioMagico::vedi(const Giocatore& g) const{}

