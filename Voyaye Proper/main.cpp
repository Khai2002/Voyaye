#include <iostream>
using namespace std;


#include "ListeChainee.h"
#include "Catalogue.h"
#include "TrajetCompose.h"

#define MAX_LENGTH 40

#pragma warning( push )
#pragma warning( disable : 4100 )

void serviceLoop();

int main(int argc, char const *argv[])
{
    
   serviceLoop();
    
    return 0;
}

void serviceLoop(){
    int s, s1;
    char* depart = new char[MAX_LENGTH];
    char* arrivee = new char[MAX_LENGTH];
    char* modeTransport = new char[MAX_LENGTH];

    Catalogue cat;
    TrajetCompose* complex;

    
    cout << "--------- Menu ---------" << endl;
    cout << "1: Add Simple Path" << endl;
    cout << "2: Add Complex Path" << endl;
    cout << "3: See Catalogue" << endl;
    cout << "4: Search Direct Paths" << endl;
    cout << "5: Search All Paths" << endl; 
    cout << "0: Quit" << endl;

    while(cin >> s){
        if(s==0){
            break;
        }else if(s==1){
            cout << "--- Creating Simple Path -----" << endl;
            cin >> depart;
            cin >> arrivee;
            cin >> modeTransport;
            cout << "------------------------------" << endl;
            cat.addTrajetSimple(depart, arrivee, modeTransport);
        }else if(s==2){
            
            cout << "--- Creating Complex Path -----" << endl;
            cout << "Enter departure and arrival destination.." << endl;
            cin >> depart;
            cin >> arrivee;
            complex = new TrajetCompose(depart, arrivee);

            cout << "1: Add Simple Path" << endl;
            cout << "0: Exit Complex Path" << endl;
            while(cin >> s1){
                if(s1==0){
                    break;
                }else if(s1==1){
                    cout << "--------- Add Simple Path -----" << endl;
                    cin >> depart;
                    cin >> arrivee;
                    cin >> modeTransport;
                    cout << "------------------------------" << endl;
                    complex->addTrajetSimple(depart, arrivee, modeTransport);
                }
                cout << "1: Add Simple Path" << endl;
                cout << "0: Exit Complex Path" << endl;
            }

            cat.addTrajetCompose(complex);
            cout << "----------------------------" << endl;
        }else if(s==3){
            cat.Afficher();
        }else if(s==4){
            cout << "Enter depature destination: ";
            cin >> depart;
            cout << "Enter arrival destination: ";
            cin >> arrivee;
            cat.searchDirect(depart, arrivee);
        }else if(s==5){
            cout << "Enter depature destination: ";
            cin >> depart;
            cout << "Enter arrival destination: ";
            cin >> arrivee;
            cat.searchAll(depart, arrivee);
        }
        cout << endl;
        cout << "--------- Menu ---------" << endl;
        cout << "1: Add Simple Path" << endl;
        cout << "2: Add Complex Path" << endl;
        cout << "3: See Catalogue" << endl;
        cout << "4: Search Direct Paths" << endl;
        cout << "5: Search All Paths" << endl; 
        cout << "0: Quit" << endl;
    }

    delete depart;
    delete arrivee;
    delete modeTransport;
}

