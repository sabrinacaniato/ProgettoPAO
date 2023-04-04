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
        //string descrizione; gestisco graficamente
    public:
        Personaggio();
        Personaggio(string n, string squad, string vist);
        
        string getRuolo()const;

        string getSquadra()const;

        string getVisto()const;

        void setNome(string nom);

       // Giocatore getGiocatore(list<Giocatore> l);

        //Personaggio& operator=(const Personaggio& p);


        virtual ~Personaggio();

};

#endif