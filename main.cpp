#include <iostream>
using namespace std;
#include "Medium.h"
#include "Veggente.h"
#include "Personaggio.h"
#include "Giocatore.h"
#include "Lupo.h"
#include "Medico.h"



int main()
{
  Personaggio p= Medium();
  Giocatore a ("Anna");
  a.setPersonaggio(p);
  Veggente v;
  Giocatore s("Sabrina");
  s.setPersonaggio(v);
  Medium m;
  Lupo lup;
  Giocatore e("Elena");
  Medico med;
  e.setPersonaggio(med);
  med.salva(e,a);
  cout<<"\n"<<a.getVivo();
  lup.uccidi(a);
  cout<<"\n"<<a.getVivo()<<"\n";
  cout<<"Il giocatore " <<a.getNome()<<" è un "<< v.vedi(a);
  cout<<m.vedi(s);

  return 0;
}
