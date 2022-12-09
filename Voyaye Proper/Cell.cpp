#include "Cell.h"
using namespace std;

// Methods
    void Cell::Afficher(){
        trajet->Afficher();
    }

    char* Cell::getDepart(){
        return trajet->Trajet::getDepart();
    }

    char* Cell::getArrivee(){
        return trajet->Trajet::getArrivee();
    }

// Constructor
    Cell::Cell(){}

    Cell::Cell(Trajet* trajet_param)
    : trajet(trajet_param)
    {}

    Cell::Cell(Trajet* trajet_param, Cell* next_param)
    : trajet(trajet_param), next(next_param)
    {}

    Cell::Cell(Cell & aCell){
        trajet = aCell.trajet;
    }

    Cell::~Cell(){
        delete trajet;
        delete next;
    }