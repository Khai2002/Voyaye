#include "ListeChainee.h"
using namespace std;

// Methods
    void ListeChainee::AddCell(Cell* aCell){
        if(head == nullptr){
            head = new Cell(*aCell);
        }else{
            Cell* cursor = head;
            while(1){
                if(cursor->next != nullptr){
                    cursor = cursor->next;
                }else{
                    cursor->next = new Cell(*aCell);
                    break;
                }
            }
        }
    }

    void ListeChainee::PopCell(){
        if(head == nullptr)return;
        if(head->next == nullptr){
            head = nullptr;
            return;
        }
        Cell* cursor = head;
        Cell* next = cursor->next;
        while(1){
            if(next->next != nullptr){
                cursor = next;
                next = next->next;
            }else{
                cursor->next =  nullptr;
                break;
            }
        }
        
    }

    Cell * ListeChainee::getHead(){
        return head;
    }

    void ListeChainee::AddTrajetSimple(char* depart_param, char* arrivee_param, char* mode_param){
        tmpTrajet = new TrajetSimple(depart_param, arrivee_param, mode_param);
        tmpCell =  new Cell(tmpTrajet);
        AddCell(tmpCell);   
    }

    void ListeChainee::AddTrajetCompose(Trajet* trajet){
        tmpCell = new Cell(trajet);
        AddCell(tmpCell);
    }

    int ListeChainee::findLength(){
        if(head == nullptr){return 0;}

        int count = 1;
        Cell * cursor = head;
        while(1){
            if(cursor->next == nullptr)break;
            cursor = cursor->next;
            count ++;
        }
        return count;
    }

    void ListeChainee::Afficher(){
        if(head == nullptr){
                cout << "Nothing" << endl;
                return;
        }
        Cell * cursor = head;
        head->Afficher();

        while(1){
            if(cursor->next != nullptr){
                cursor = cursor->next;
                cursor->Afficher();
            }else{
                break;
            }
        }
    }

// Constructor
    ListeChainee::ListeChainee()
    {
    #ifdef MAP
        cout << "Appel au constructeur de <ListeChainee>" << endl;
    #endif
    }

    ListeChainee::ListeChainee(Cell* head_param)
    : head(head_param)
    {

    }

    ListeChainee::~ListeChainee(){
    #ifdef MAP
        cout << "Appel au destructeur de <ListeChainee>" << endl;
    #endif

        //cout << "Destroying list" << endl;
        // int len = ListeChainee::findLength();
        

/* 
        if (head != nullptr) {
            cout << "head != nullptr" << endl;
            if (head->next == nullptr) {
                delete head;
                cout << "delete only one" << endl;
            } else {
                Cell * last = head;
                Cell * curr = head->next;
                if (curr == nullptr) {
                    cout << "delete head" << endl;
                    delete head;
                }
                while (curr != nullptr) {
                    cout << "in while loop" << endl;
                    if (curr->next != nullptr) {
                        delete last;
                        last = curr;
                        curr = curr->next;
                    } else {
                        cout << "end reached" << endl;
                        delete last;
                        delete curr;
                        break;
                    }

                }

            }

        }
         */

        delete tmpTrajet;
        delete tmpCell;
        
        
/*         head->next->deleteTrajet();
        delete head->next;
        head->deleteTrajet(); */
        delete head;
        // cout << "List destroyed" << endl;
    }