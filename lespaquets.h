#ifndef LESPAQUETS_H
#define LESPAQUETS_H

#include<iostream>
#include<string>
#include "paquet.h"
using namespace std;

class LesPaquets
{
public:
    LesPaquets();
    void creerPaquet();
    void ajouterPaquet(Paquet p);
    void reviserPaquet(string nom);

};

#endif // LESPAQUETS_H
