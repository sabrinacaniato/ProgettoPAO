#include <string>
using namespace std;
#include "Personaggio.h"

//enum  squadra {Villaggio, Lupi,Solitario};
//enum  visto {Buono, Cattivo, Indefinito};

        Personaggio::Personaggio(){}
        Personaggio:: Personaggio(string n, string squad, string vist): nome(n), squadra(squad), visto(vist){}
        
        string Personaggio:: getRuolo()const{return nome;}

        string Personaggio:: getSquadra()const{return squadra;}

        string Personaggio::getVisto()const{return visto;}

        void Personaggio::setNome(string nom){nome=nom;}

        /*List<Giocatore> getGiocatore(List<Giocatore> l){
                for(auto *it; it!=l.end(); it++){
                      if (it->getPersonaggio()==*this ){
                        return *it;
                      } 
                }
        }*/

        //unsigned int Personaggio::getIDp()const{return idp;}

       /*Personaggio& Personaggio::operator=(const Personaggio& p){
                if(this!=&p){
                        nome=p.nome;
                        squadra=p.squadra;
                        visto=p.visto;
                }
                retrun
        }*/

        Personaggio:: ~Personaggio(){}

