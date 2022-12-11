#include "Catalogue.h"
using namespace std;


// Methods
    void Catalogue::Afficher(){
        catalog.Afficher();
    }

    void Catalogue::PopCell(){
        catalog.PopCell();
    }

    void Catalogue::addTrajetSimple(char* depart_param, char* arrivee_param, char* mode_param){
        catalog.AddTrajetSimple(depart_param, arrivee_param, mode_param);
    }

    void Catalogue::addTrajetCompose(Trajet * trajet){
        catalog.AddTrajetCompose(trajet);
    }

    void Catalogue::searchDirect(char* depart_param, char* arrivee_param){
        Cell* cursor = catalog.getHead();
        if(cursor != nullptr){
            while(1){
                if(!( strcmp(cursor->getDepart(), depart_param) && strcmp(cursor->getArrivee(), arrivee_param))){
                    cursor->Afficher();
                }
                if(cursor->next==nullptr){
                    break;
                }
                cursor = cursor->next;
            }
        }
    }

    void Catalogue::searchAll(char* depart_param, char* arrivee_param){
        ListeChainee tempList;
        Cell * cursor = catalog.getHead();
        if(cursor != nullptr){
            while(1){
                if(!strcmp(cursor->getDepart(), depart_param)){
                    searchUnity(cursor, arrivee_param, tempList);
                }

                if(cursor->next == nullptr){
                    break;
                }
                cursor = cursor->next;
            }
        }

        cout << "I'm still fine" << endl;
    }

    void Catalogue::searchUnity(Cell * current, char* arrivee_param, ListeChainee & liste){
        liste.AddCell(current);

        // If route found
        if(!strcmp(current->getArrivee(), arrivee_param)){
            liste.Afficher();
            liste.PopCell();
            return;
        }

        // If not
        Cell * cursor = catalog.getHead();
        if(cursor != nullptr){
            while(1){
                if(!strcmp(cursor->getDepart(), current->getArrivee())){
                    searchUnity(cursor, arrivee_param, liste);
                }

                if(cursor->next == nullptr){
                    break;
                }
                cursor = cursor->next;
            }
        }
        
        // Remove added route
        liste.PopCell();
    }

// Constructor
    Catalogue::Catalogue(){
    #ifdef MAP
        cout << "Appel au constructeur de <Catalogue>" << endl;
    #endif        
    }


    Catalogue::~Catalogue(){
    #ifdef MAP
        cout << "Appel au destructeur de <Catalogue>" << endl;
    #endif
        // cout << "Destroying catalog" << endl;
        // catalog.ListeChainee::~ListeChainee();
        // cout << "catalog destroyed" << endl;
    } 