#ifndef PAQUET_H
#define PAQUET_H

#include<iostream>
#include<string>
using namespace std;

class Paquet
{
private:
    String nom;
    String theme;
    int nbUtilisation;
    int tmpUtilisation;
    int tpsRecord;
    int ScoreM;
    void jouerCarte();
    void trierCarte();
public:
    Paquet();
    void creerCarte();
    void ajouterCarte();
    void reviser();
    void initialierPaquet();
};

#endif // PAQUET_H
