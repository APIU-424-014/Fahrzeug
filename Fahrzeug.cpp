  //                                                      //
  //                                                      //
  //    Fahrzeuge und Technische Spezifikationen dazu     //
  //                                                      //
  //      Copyright by Stefano aka Canelloni               //
 //                                                       //


#include <iostream>
#include <string>

using namespace std;

class Reifen

{
public:
  string position;
  bool hatAlufelgen;
  int profilStaerke;

  Reifen();
  Reifen(string, bool, int);

  ~Reifen();

  void anzeigen();
  
};

Reifen::Reifen()
{

  position = "vorne links";
  hatAlufelgen = false;
  profilStaerke = 10;
}

Reifen::Reifen(string aPosition, bool aHatAlufelgen, int aProfilStaerke)
{
  position = aPosition;
  hatAlufelgen = aHatAlufelgen;
  profilStaerke = aProfilStaerke;
}

Reifen::~Reifen()

{

}

void Reifen::anzeigen()

{
  cout << "Der Reifen " << position << " hat eine Profilstaerke von " << profilStaerke << " und hat ";
  if(!hatAlufelgen)
  
  {
  cout << "keine";
  }
  
  cout << " Alufelgen" << endl;

}


class Auto

{
public:
  Reifen vorneLinks;
  Reifen hintenLinks;
  Reifen vorneRechts;
  Reifen hintenRechts;

  int geschwindigkeit;
  double preis;
  string farbe;

  void gasGeben(int);

  Auto();
  ~Auto();
  Auto(int, double);
};

Auto::Auto()://Name und Parameterliste wie bisher, danach Doppelpunkt
    geschwindigkeit(100), preis(20000)//Initialisierungsliste
  {}//Rumpf

Auto::Auto(int aGeschwindigkeit, double aPreis)
{
  geschwindigkeit = aGeschwindigkeit;
  preis = aPreis;

  vorneRechts.position = "vorne Rechts";
  vorneRechts.profilStaerke = 23;
  vorneRechts.hatAlufelgen = true;
  hintenRechts.position = "hinten Rechts";
  hintenLinks.position = "hinten Links";
}

Auto::~Auto()
{

}

void Auto::gasGeben(int wieviel)
{
  geschwindigkeit+=wieviel;
}


int main()
{
  int auswahl;

  cout << "Wählen Sie ihr Fahrzeug....\n"
  "1 - Porsche\n"
  "2 - Ferrari\n";


  cin >> auswahl;


  switch (auswahl)
  {


  case 1:
  {


  Auto porsche;
  porsche.geschwindigkeit = 200;
  cout << "Der Porsche erreicht " << porsche.geschwindigkeit << " Sachen " << endl;
  Auto corvette(300,34000.34);
  cout << "Die Corvette erreicht " << corvette.geschwindigkeit << " Sachen und kostete " << corvette.preis  << endl;
  corvette.vorneLinks.anzeigen();
  corvette.vorneRechts.anzeigen();
  break;
  }




  case 2:
  {


  Auto ferrari;
  ferrari.geschwindigkeit = 300;
  cout << "Der Ferrari erreicht " << ferrari.geschwindigkeit << " Sachen " << endl;
  Auto Enzo(390,35300.25);
  cout << "Der Enzo erreicht " << ferrari.geschwindigkeit << " Sachen und kostete " << ferrari.preis  << endl;
  ferrari.vorneLinks.anzeigen();
  ferrari.vorneRechts.anzeigen();
  break;
  }


  default:
  {


  cout << " Bitte nochmal Auswählen " <<endl;
  break;
  }



  return 0;
}
  }
