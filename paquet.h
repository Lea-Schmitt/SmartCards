#ifndef PAQUET_H
#define PAQUET_H

#include<iostream>
#include<string>
#include "carte.h"

using namespace std;

class Paquet
{
private:
    string nom;
    string theme;
    int nbUtilisation;
    int tmpUtilisation;
    int tpsRecord;
    int ScoreM;
public:
    Paquet();
    void creerCarte();
    void ajouterCarte(Carte c);
    void reviser();
    void initialiserPaquet();
    void jouerCartes();
    void trierCartes();
};

#endif // PAQUET_H
