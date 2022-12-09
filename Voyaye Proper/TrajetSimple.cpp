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
    TrajetSimple::TrajetSimple(){}

    TrajetSimple::TrajetSimple(char* depart_param, char* arrivee_param, char* mode_param)
    : Trajet(depart_param, arrivee_param)
    {
        modeTransport = new char[strlen(mode_param)];
        strcpy(modeTransport,mode_param);

    } 

    TrajetSimple::~TrajetSimple(){
        this->Trajet::~Trajet();
        delete modeTransport;
        cout << "Destroying Simple" << endl;
    }