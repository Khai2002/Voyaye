//---------- Interface de la classe <TrajetCompose> (fichier TrajetCompose.h) ----------------

#if ! defined (TRAJETCOMPOSE_H)
#define TRAJETCOMPOSE_H

#include <iostream>
using namespace std;

// Interfaces utilisées
#include "TrajetSimple.h"
#include "TrajetCompose.h"
#include "ListeChainee.h"

// Constants

//------------------------------------------------------------------------


class TrajetCompose : public Trajet
{
public:

// Method
    void Afficher();

    void addTrajetSimple(char* depart_param, char* arrivee_param, char* mode_param);

// Constructors / Destructors
    TrajetCompose();

    TrajetCompose(char* depart_param, char* arrivee_param);

    virtual ~TrajetCompose();


protected:
    //char* arrivee;
    ListeChainee liste;

private:
};



#endif