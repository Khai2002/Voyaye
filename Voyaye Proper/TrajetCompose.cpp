#include "TrajetCompose.h"
using namespace std;

// Method
    void TrajetCompose::Afficher(){
        cout << "\n";
        cout << "=======================================" << endl;
        cout << "\n";
        Trajet::Afficher();
        cout << "-------------" << endl;
        liste.Afficher();
        cout << "=======================================" << endl;
    }

    void TrajetCompose::addTrajetSimple(char* depart_param, char* arrivee_param, char* mode_param){
        liste.AddTrajetSimple(depart_param, arrivee_param, mode_param);
    }

    

// Constructors / Destructors
    TrajetCompose::TrajetCompose()
    {
    #ifdef MAP
        cout << "Appel au constructeur de <TrajetCompose>" << endl;
    #endif        
    }

    TrajetCompose::TrajetCompose(char* depart_param, char* arrivee_param)
    : Trajet(depart_param, arrivee_param)
    {}

    TrajetCompose::~TrajetCompose(){
    #ifdef MAP
        cout << "Appel au destructeur de <TrajetCompose>" << endl;
    #endif
        // this->Trajet::~Trajet();
        // cout << "Destroying Compose" << endl;
        // delete[] arrivee;
    } 