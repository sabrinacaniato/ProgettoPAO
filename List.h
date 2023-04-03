#if !defined(LIST_H)
#define LIST_H

#include <iostream>
#include "Giocatore.h"
using namespace std;

class List{
    friend class iterator;
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
        List();
        List(const List& l); //copia profonda 
        ~List();
        List& operator=(const List& l);

        void inserimento(const Giocatore& g);
        Giocatore estrai();
        List serchPersonaggio(const Personaggio& p);
        void eliminaGiocatore(const Giocatore& g);
        //bool search(Personaggio p);

        class iterator{
            friend class List;
            private:
                List::Nodo* punt; //Nodo puntato dall'iteratore
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