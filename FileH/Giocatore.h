#if !defined(GIOCATORE_H)
#define GIOCATORE_H

#include <string>
#include "Personaggio.h"
using namespace std;

    

class Giocatore{
    private:
        string nome;
        Personaggio ruolo;
        unsigned int livello;
        unsigned int voti;
        int vivo;
        bool salvato;
        //unsigned int idp; //id temporaneo per la partita del personaggio assegnato

    public:
        Giocatore();
        Giocatore(string s, unsigned int v=0);
        string getNome() const;
        void setNome(string n);


        Personaggio getPersonaggio() const;
        void setPersonaggio(Personaggio p);

        unsigned int getVoti() const;
        void addVoto();
        void setVoti();

        bool isSalvato()const;
        void setSalvato();

        unsigned int getIDp() const;
        //string getPersonaggio()const;

        bool isVivo()const;
        void setMorto();
        void setVivo(int v);
        int getVivo();
        bool operator== (Giocatore g)const;


        ~Giocatore();

};
#endif
