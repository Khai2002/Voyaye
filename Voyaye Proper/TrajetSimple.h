//---------- Interface de la classe <TrajetSimple> (fichier TrajetSimple.h) ----------------

#if ! defined (TRAJETSIMPLE_H)
#define TRAJETSIMPLE_H

#include <iostream>
#include <cstring>
using namespace std;

// Interfaces utilisées
#include "Trajet.h"
// Constants

//------------------------------------------------------------------------


class TrajetSimple : public Trajet
{
public:

// Method

    void Afficher();

// Constructors / Destructors
    TrajetSimple();

    TrajetSimple(char* depart_param, char* arrivee_param, char* mode_param);

    virtual ~TrajetSimple();

protected:
    char* modeTransport;

private:

};



#endif