#include <iostream>
using namespace std;
#include "FileH/Medium.h"
#include "FileH/Veggente.h"
#include "FileH/Personaggio.h"
#include "FileH/Giocatore.h"
#include "FileH/Lupo.h"
#include "FileH/Medico.h"



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
  med.salva(a);
  cout<<"\n"<<a.getVivo();
  lup.uccidi(a);
  cout<<"\n"<<a.getVivo()<<"\n";
  cout<<"Il giocatore " <<a.getNome()<<" è un "<< v.vedi(a);
  cout<<m.vedi(s);

  return 0;
}
