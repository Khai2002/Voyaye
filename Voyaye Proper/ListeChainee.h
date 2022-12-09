
//---------- Interface de la classe <ListeChainee> (fichier ListeChainee.h) ----------------

#if ! defined (LISTECHAINEE_H)
#define LISTECHAINEE_H

#define MAX_LENGTH 40

// Interfaces utilisées
#include <iostream>
#include "Cell.h"

// Constants

//------------------------------------------------------------------------
class ListeChainee 
{
public:

// Methods
    void AddCell(Cell* aCell);

    void PopCell();

    Cell * getHead();;

    void AddTrajetSimple(char* depart_param, char* arrivee_param, char* mode_param);

    void AddTrajetCompose(Trajet* trajet);

    int findLength();

    void Afficher();

// Constructor
    ListeChainee();

    ListeChainee(Cell* head_param);

    virtual ~ListeChainee();

protected:
    Cell * tmpCell {nullptr};
    Trajet * tmpTrajet {nullptr};
    Cell * head {nullptr};

private:
};


#endif