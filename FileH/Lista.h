#if !defined(LISTA_H)
#define LISTA_H

#include <iostream>
#include "Giocatore.h"
using namespace std;

class Lista{
    //friend class Lista::iterator;
    private:
        class Nodo{
            public:
                Giocatore giocatore;
                Nodo* next;
                Nodo();
                Nodo(const Giocatore& g, Nodo* p);
                ~Nodo();
                int riferimenti; //quanti puntatori puntano a quell'oggetto
                void operator delete(void*);
        };
        Nodo* first;
        static Nodo* copia(Nodo* n);
        static void distruggi(Nodo* n);

    public:
        Lista();
        Lista(const Lista& l); //copia profonda
        ~Lista();
        Lista& operator=(const Lista& l);

        void inserimento(const Giocatore& g);
        Giocatore estrai();
        //Lista searchPersonaggio(const Personaggio& p);
        void eliminaGiocatore(const Giocatore& g);
        //bool search(Personaggio p);

        class iterator{
            friend class Lista;
            private:
                Lista::Nodo* punt; //Nodo puntato dall'iteratore
            public: 
                bool operator== (iterator i)const;
                bool operator!= (iterator i)const;               
                iterator operator++();
                iterator operator++(int);
        };

        iterator begin() const;
        iterator end() const;
        Giocatore& operator[](iterator i) const;
};

#endif