
#include <iostream>
#include "List.h"
using namespace std;

    List::Nodo::Nodo(): next(0), riferimenti(0){}

    List::Nodo::Nodo(const Giocatore& g, Nodo* p): giocatore(g), next(p), riferimenti(0){}

    List::List(){
        first=NULL;
    }
    List::List(const List& l):first(l.first){   
        if(first) first->riferimenti++;
     } //copia profonda 

    List::~List(){
        if (first) delete first;
    }

    List& List::operator=(const List& l){}

    void List::inserimento(const Giocatore& g){
       if (first) first -> riferimenti--;
       first = new Nodo(g, first);
       first->riferimenti++;
    }
    Giocatore List::estrai(){
        Giocatore aux=first->giocatore;
        Nodo* p=first;
        first=first->next;
        if(first) first->riferimenti++;
        delete p;
        return aux;
    }

    void List::eliminaGiocatore(const Giocatore& g){
        Nodo* p= first;
        Nodo* prec=0;
        while(p&&!(p->giocatore==g)){
            prec=p;
            p=p->next;
        }
        if(p){
            if(!prec)
                first = p->next;
            else    
                prec->next=p->next;
            delete p;
        }
    }
    List List::serchPersonaggio(const Personaggio& p){
        Nodo* q= first;
        List l;
        while(q){
            if((q->giocatore.getPersonaggio().getRuolo())==p.getRuolo())
                l.inserimento(q->giocatore);
            q=q->next;
        }
        return l;
    }

    bool List::iterator::operator== (iterator i)const{
        return punt==i.punt;
    }
    bool List::iterator::operator!= (iterator i)const{
        return punt != i.punt;
    }               
    List::iterator List::iterator::operator++(){
        if(punt) punt=punt->next;
        return *this;
    }
    List::iterator List::iterator::operator++(int){
        iterator aux=*this;
        if(punt) punt=punt->next;
        return aux;
    }
    List::iterator List::begin() const{
        iterator aux;
        aux.punt=first;
        return aux;
    }
    List::iterator List::end() const{
        iterator aux;
        aux.punt=0;
        return aux;
    }
    Giocatore& List::operator[](List::iterator i) const{
        return(i.punt)->giocatore;
    }
    void List::Nodo::operator delete(void* p){
        if (p){
            Nodo* q= static_cast<Nodo*>(p);
            q->riferimenti--;
            if(q->riferimenti ==0){
                delete q->next;
                ::delete q;
            }
        }
    }
