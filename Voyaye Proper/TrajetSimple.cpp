#include "TrajetSimple.h"
using namespace std;

// Method

    void TrajetSimple::Afficher(){
        
        cout << "\n";
        Trajet::Afficher();
        cout << "Mode of Transport: " << modeTransport << endl;
        cout << "\n";
    }

// Constructors / Destructors
    TrajetSimple::TrajetSimple()
    {
    #ifdef MAP
        cout << "Appel au constructeur de <TrajetSimple>" << endl;
    #endif
    }

    TrajetSimple::TrajetSimple(char* depart_param, char* arrivee_param, char* mode_param)
    : Trajet(depart_param, arrivee_param)
    {
        modeTransport = new char[strlen(mode_param + 1)];
        strcpy(modeTransport,mode_param);

    } 

    TrajetSimple::~TrajetSimple(){
    #ifdef MAP
        cout << "Appel au destructeur de <TrajetSimple>" << endl;
    #endif

        // this->Trajet::~Trajet();
        delete[] modeTransport;
        // cout << "Destroying Simple" << endl;
    }