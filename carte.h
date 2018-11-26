#ifndef CARTE_H
#define CARTE_H

#include<iostream>
#include<String>
using namespace std;

class Carte
{
private:
    int score;
    String question;
    String reponse;
public:
    Carte();
    void jouerCarte();
    void initialiserScore();
    void augmenterScore();
    void diminuerScore();


    //commentaire

};

#endif // CARTE_H
