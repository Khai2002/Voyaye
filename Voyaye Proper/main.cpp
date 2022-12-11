/*************************************************************************
                           main  -  description
                             -------------------
                             
    début                : 22/11/2022
    copyright            : (C) 2022 par NGUYEN Le Tuan Khai, 
                                        SU Yikang, 
                                        WYNCOLL Marnie
    e-mail               : le.nguyen@insa-lyon.fr, 
                           yikang.su@insa-lyon.fr, 
                           marnie.wyncoll@insa-lyon.fr
*************************************************************************/
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

void serviceLoop() {
    char s, s1;
    char* depart = new char[MAX_LENGTH];
    char* arrivee = new char[MAX_LENGTH];
    char* modeTransport = new char[MAX_LENGTH];

    Catalogue cat;
    TrajetCompose* complex;

    
    cout << "--------- Menu ---------" << endl;
    cout << "1: Add Simple Path" << endl;
    cout << "2: Add Compound Path" << endl;
    cout << "3: See Catalogue" << endl;
    cout << "4: Search Direct Paths" << endl;
    cout << "5: Search All Paths" << endl; 
    cout << "0: Quit" << endl;

    while (cin >> s) {

        bool quit = false;
        switch(s) {
            case '0':
                quit = true;
                break;

            case '1':
                cout << "--- Creating Simple Path -----" << endl;
                cout << "Enter city of departure: ";
                cin >> depart;
                cout << "Enter city of arrival: ";
                cin >> arrivee;
                cout << "Add mode of Transport: ";
                cin >> modeTransport;
                cout << "------------------------------" << endl;
                cat.addTrajetSimple(depart, arrivee, modeTransport);
                break;

            case '2':
                cout << "--- Creating Complex Path -----" << endl;
                cout << "Enter city of departure: ";
                cin >> depart;
                cout << "Enter city of arrival: ";
                cin >> arrivee;
                cout << endl;
                complex = new TrajetCompose(depart, arrivee);
                cout << "1: Add Simple Path" << endl;
                cout << "0: Exit Complex Path" << endl;

                while (cin >> s1) { 
                    
                    if (s1 == '0') {
                        break;
                    } else if (s1 == '1') {
                        cout << "--------- Add Simple Path -----" << endl;
                        cout << "Enter city of departure: ";
                        cin >> depart;
                        cout << "Enter city of arrival: ";
                        cin >> arrivee;
                        cout << "Add mode of Transport: ";
                        cin >> modeTransport;
                        cout << "------------------------------" << endl;
                        complex->addTrajetSimple(depart, arrivee, modeTransport);
                    } else {
                        cout << "Please enter 0 or 1" << endl;
                        continue;
                    }
                    cout << "1: Add Simple Path" << endl;
                    cout << "0: Exit Complex Path" << endl;
                }

                cat.addTrajetCompose(complex);
                cout << "----------------------------" << endl;
                break; 

            case '3':
                cat.Afficher();
                break;

            case '4':
                cout << "Enter city of departure: ";
                cin >> depart;
                cout << "Enter city of arrival: ";
                cin >> arrivee;
                cat.searchDirect(depart, arrivee);

                break;

            case '5':
                cout << "Enter city of departure: ";
                cin >> depart;
                cout << "Enter city of arrival: ";
                cin >> arrivee;
                cat.searchAll(depart, arrivee);
                break;

            default:
                cout << "Invalid input, please select a number from 0 to 5 inclusive..." << endl;
        }
        
        if (quit) {
            break;
        }
      
        cout << endl;
        cout << "--------- Menu ---------" << endl;
        cout << "1: Add Simple Path" << endl;
        cout << "2: Add Complex Path" << endl;
        cout << "3: See Catalogue" << endl;
        cout << "4: Search Direct Paths" << endl;
        cout << "5: Search All Paths" << endl; 
        cout << "0: Quit" << endl;
            
            
/*
        }
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
            cout << "Enter city of departure: ";
            cin >> depart;
            cout << "Enter city of arrival: ";
            cin >> arrivee;
            cout << endl;
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
            cout << "Enter city of depature: ";
            cin >> depart;
            cout << "Enter city of arrival: ";
            cin >> arrivee;
            cat.searchDirect(depart, arrivee);
        }else if(s==5){
            cout << "Enter city of departure: ";
            cin >> depart;
            cout << "Enter city of arrival: ";
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

*/
    }
    delete[] depart;
    delete[] arrivee;
    delete[] modeTransport;
}
