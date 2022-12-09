
//---------- Interface de la classe <Cell> (fichier Cell.h) ----------------

#if ! defined (CELL_H)
#define CELL_H

// Interfaces utilisées
#include "Trajet.h"
#include "TrajetSimple.h"
// Constants

//------------------------------------------------------------------------
class Cell 
{
public:

// Methods
    void Afficher();

    char* getDepart();

    char* getArrivee();

// Constructor
    Cell();

    Cell(Trajet* trajet_param);

    Cell(Trajet* trajet_param, Cell* next_param);

    Cell(Cell & aCell);


    virtual ~Cell();

    Cell* next {nullptr};

protected:
    
    Trajet* trajet;
    

private:
};


#endif