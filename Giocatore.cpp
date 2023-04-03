    #include <string>
    using namespace std;
    #include "Giocatore.h"
    
        Giocatore::Giocatore(){}

        Giocatore::Giocatore(string s, unsigned int l, unsigned int v ): nome(s), livello(l), voti(v){
            vivo=1;
            salvato=false;
            ruolo=Personaggio();
        }
        string Giocatore::getNome() const {return nome;}
        void Giocatore::setNome(string n){nome=n;}

        unsigned int Giocatore::getLivello() const {return livello;}
        void Giocatore::setLivello(unsigned int l){livello=l;}
        void Giocatore::addLivello(){livello++;}

        Personaggio Giocatore::getPersonaggio() const {return ruolo;}
        void Giocatore::setPersonaggio(Personaggio p){ruolo=p;}

        unsigned int Giocatore::getVoti() const {return voti;}
        void Giocatore::addVoto() {voti++;}
        void Giocatore::setVoti() {voti=0;}

        /*unsigned int Giocatore:: getIDp()const{return idp;}
        string Giocatore::getPersonaggio()const{
            switch(getIDp()) {
                case 1:
                    return "Lupo";
                    //break;
                case 2:
                    return "Medium";
                    //break;
                case 3:
                    return "Veggente";
                    //break;
                case 4:
                    return "Medico";
                   // break;
                default:
                    return "";
            }
        }*/
        bool Giocatore::operator== (Giocatore g)const{
            return g.getNome()==nome;
        }


        bool Giocatore::isSalvato()const{return salvato;}
        void Giocatore::setSalvato(){salvato=true;}

        bool Giocatore::isVivo()const{return (vivo>0);}
        void Giocatore::setMorto() {vivo=0;}
        void Giocatore::setVivo(int v) {vivo=v;}
        int Giocatore::getVivo(){return vivo;}
        Giocatore:: ~Giocatore(){}


