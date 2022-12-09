#include "Trajet.h"
using namespace std;

// Method
void Trajet::Afficher(){
    cout << "From: " << depart << " - To: " << arrivee << endl; 
}

char* Trajet::getDepart(){
    return depart;
}

char* Trajet::getArrivee(){
    return arrivee;
}

// Constructors

Trajet::Trajet() = default;

Trajet::Trajet(char* depart_param, char* arrivee_param)
{
    depart = new char[strlen(depart_param)];
    arrivee = new char[strlen(arrivee_param)];
    strcpy(depart, depart_param);
    strcpy(arrivee, arrivee_param);
}

Trajet::~Trajet(){
    delete depart;
    delete arrivee;
}    