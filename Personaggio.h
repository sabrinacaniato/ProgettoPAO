#ifndef PERSONAGGIO_H
#define PERSONAGGIO_H

#include "Giocatore.h"
#include <string>
#include <iostream>
#include<list>
using namespace std;

//enum  squadra {Villaggio, Lupi,Solitario};
//enum  visto {Buono, Cattivo, Indefinito};
class Giocatore;
class Personaggio{
    private:
        string nome;
        string squadra;
        string visto;
        //string descrizione; gestisco graficamente
        //unsigned int idp;
    public:
        Personaggio();
        Personaggio(string n, string squad, string vist);
        
        string getRuolo()const;

        string getSquadra()const;

        string getVisto()const;

        void setNome(string nom);

        Giocatore getGiocatore(list<Giocatore> l);

       // unsigned int getIDp()const;

        //Personaggio& operator=(const Personaggio& p);

        virtual ~Personaggio();

};
#endif