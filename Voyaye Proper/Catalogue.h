
//---------- Interface de la classe <Catalogue> (fichier Catalogue.h) ----------------

#if ! defined (CATALOGUE_H)
#define CATALOGUE_H

// Interfaces utilisées
#include "TrajetSimple.h"
#include "TrajetCompose.h"
#include "ListeChainee.h"
#include <cstring>
// Constants

//------------------------------------------------------------------------
class Catalogue
{
public:

// Methods
    void Afficher();

    void PopCell();

    void addTrajetSimple(char* depart_param, char* arrivee_param, char* mode_param);

    void addTrajetCompose(Trajet * trajet);

    void searchDirect(char* depart_param, char* arrivee_param);

    void searchAll(char* depart_param, char* arrivee_param);
    
    void searchUnity(Cell * current, char* arrivee_param, ListeChainee & liste);

// Constructor
    Catalogue();

    virtual ~Catalogue();
protected:
    ListeChainee catalog;
private:
};


#endif