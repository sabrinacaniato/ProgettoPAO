#if !defined(PERSONAGGIO_H)
#define PERSONAGGIO_H

#include <string>
#include <iostream>
#include<list>
using namespace std;
#include "Lista.h"
//enum  squadra {Villaggio, Lupi,Solitario};
//enum  visto {Buono, Cattivo, Indefinito};

class Personaggio{
    private:
        string nome;
        string squadra;
        string visto;
        unsigned int codiceP;
        //friend class Giocatore;
        //string descrizione; gestisco graficamente
        //unsigned int idp;
    public:
        Personaggio();
        Personaggio(string n, string squad, string vist);
        
        string getRuolo()const;

        string getSquadra()const;

        string getVisto()const;

        void setNome(string nom);

       // Giocatore getGiocatore(list<Giocatore> l);

       int getIDp()const;

        //Personaggio& operator=(const Personaggio& p);


        virtual ~Personaggio();

};

#endif