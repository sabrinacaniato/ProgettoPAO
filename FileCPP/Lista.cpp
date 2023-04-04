
#include <iostream>
#include "../FileH/Lista.h"
using namespace std;

    Lista::Nodo::Nodo(): next(0), riferimenti(0){}

    Lista::Nodo::Nodo(const Giocatore& g, Nodo* p): giocatore(g), next(p), riferimenti(0){}

    Lista::Lista(){
        first=NULL;
    }
    Lista::Lista(const Lista& l):first(l.first){
        if(first) first->riferimenti++;
     } //copia profonda 

    Lista::~Lista(){
        if (first) delete first;
    }

    Lista& Lista::operator=(const Lista& l){}

    void Lista::inserimento(const Giocatore& g){
       if (first) first -> riferimenti--;
       first = new Nodo(g, first);
       first->riferimenti++;
    }
    Giocatore Lista::estrai(){
        Giocatore aux=first->giocatore;
        Nodo* p=first;
        first=first->next;
        if(first) first->riferimenti++;
        delete p;
        return aux;
    }

    void Lista::eliminaGiocatore(const Giocatore& g){
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
    /*Lista Lista::searchPersonaggio(const Personaggio& p){
        Nodo* q= first;
        Lista l;
        while(q){
            if((q->giocatore.getPersonaggio().getRuolo())==p.getRuolo())
                l.inserimento(q->giocatore);
            q=q->next;
        }
        return l;
    }*/

    bool Lista::iterator::operator== (iterator i)const{
        return punt==i.punt;
    }
    bool Lista::iterator::operator!= (iterator i)const{
        return punt != i.punt;
    }               
    Lista::iterator Lista::iterator::operator++(){
        if(punt) punt=punt->next;
        return *this;
    }
    Lista::iterator Lista::iterator::operator++(int){
        iterator aux=*this;
        if(punt) punt=punt->next;
        return aux;
    }
    Lista::iterator Lista::begin() const{
        iterator aux;
        aux.punt=first;
        return aux;
    }
    Lista::iterator Lista::end() const{
        iterator aux;
        aux.punt=0;
        return aux;
    }
    Giocatore& Lista::operator[](Lista::iterator i) const{
        return(i.punt)->giocatore;
    }
    void Lista::Nodo::operator delete(void* p){
        if (p){
            Nodo* q= static_cast<Nodo*>(p);
            q->riferimenti--;
            if(q->riferimenti ==0){
                delete q->next;
                ::delete q;
            }
        }
    }
