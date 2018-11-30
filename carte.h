#ifndef CARTE_H
#define CARTE_H

#include<iostream>
#include<string>
using namespace std;

class Carte
{
private:
    int score;
    string question;
    string reponse;
public:
    Carte(void);
    void jouerCarte();
    void initialiserScore();
    void augmenterScore();
    void diminuerScore();
};

#endif // CARTE_H
