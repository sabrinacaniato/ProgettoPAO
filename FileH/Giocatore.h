#if !defined(GIOCATORE_H)
#define GIOCATORE_H

#include <string>
#include "Personaggio.h"
using namespace std;

    

class Giocatore{
    private:
        string nome;
        Personaggio ruolo;
        unsigned int voti;
        int vivo;
        bool salvato;

    public:
        Giocatore();
        Giocatore(string s);

        string getNome() const;
        void setNome(string n);


        Personaggio getPersonaggio() const;
        void setPersonaggio(Personaggio p);

        unsigned int getVoti() const;
        void addVoto();
        void setVoti();

        bool isSalvato()const;
        void setSalvato();

        //string getPersonaggio()const;

        bool isVivo()const;
        void setMorto();
        void setVivo(int v);
        int getVivo();
        bool operator== (Giocatore g)const;


        ~Giocatore();

};
#endif
