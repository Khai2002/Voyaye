//---------- Interface de la classe <Trajet> (fichier Trajet.h) ----------------

#if ! defined (TRAJET_H)
#define TRAJET_H

#include <iostream>
#include <cstring>
using namespace std;

// Interfaces utilisées

// Constants

//------------------------------------------------------------------------


class Trajet
{
public:

// Method
    virtual void Afficher();

    char* getDepart();

    char* getArrivee();

// Constructors / Destructors
    Trajet();

    Trajet(char* depart_param, char* arrivee_param);

    virtual ~Trajet();

protected:
    char* depart;
    char* arrivee;

private:
};



#endif