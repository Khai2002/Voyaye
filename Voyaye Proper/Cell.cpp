#include "Cell.h"
using namespace std;

// Methods
    void Cell::Afficher(){
        trajet->Afficher();
    }
    
    void Cell::deleteTrajet(){
        delete trajet;
    }

    char* Cell::getDepart(){
        return trajet->Trajet::getDepart();
    }

    char* Cell::getArrivee(){
        return trajet->Trajet::getArrivee();
    }

// Constructor
    Cell::Cell()
    {
    #ifdef MAP
        cout << "Appel au constructeur de <Cell>" << endl;
    #endif
    }

    Cell::Cell(Trajet* trajet_param)
    : trajet(trajet_param)
    {
    #ifdef MAP
        cout << "Appel au constructeur1 de <Cell>" << endl;
    #endif  
    }

    Cell::Cell(Trajet* trajet_param, Cell* next_param)
    : trajet(trajet_param), next(next_param)
    {
    #ifdef MAP
        cout << "Appel au constructeur2 de <Cell>" << endl;
    #endif  
    }

    Cell::Cell(Cell & aCell)
    {
    #ifdef MAP
        cout << "Appel au constructeur de copie de <Cell>" << endl;
    #endif
        trajet = aCell.trajet;
    }

    Cell::~Cell(){
    #ifdef MAP
        cout << "Appel au destructeur de <Cell>" << endl;
    #endif
        //cout << "destroying Cell" << endl;
        // delete trajet;
        // delete next;
        //cout << "Cell destroyed" << endl;
    }