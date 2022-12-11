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

Trajet::Trajet() 
{
#ifdef MAP
    cout << "Appel au constructeur de <Trajet>" << endl;
#endif
}

Trajet::Trajet(char* depart_param, char* arrivee_param)
{
    depart = new char[strlen(depart_param+1)];
    arrivee = new char[strlen(arrivee_param+1)];
    strcpy(depart, depart_param);
    strcpy(arrivee, arrivee_param);
}

Trajet::~Trajet(){
#ifdef MAP
    cout << "Appel au destructeur de <Trajet>" << endl;
#endif
    //cout << "destroying Trajet" << endl;
    delete[] depart;
    delete[] arrivee;
    //cout << "trajet destoryed" << endl;
}    