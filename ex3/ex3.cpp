#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    fstream myFile;
    myFile.open("PERSOANE.txt", ios::in); // read PERSOANE.txt file
    if (myFile.is_open()) {
        // Printeaza fiecare linie din fisier
        string line;
        // Pentru a verifica daca numarul este egal cu 10, cand a ajuns la 10 useurl este intrebat daca vrea sa continue
        int counter = 0;
        int numarulTotalDePersoane = 0;
        while (getline(myFile, line)) {
            cout << line << endl;
            counter++;
            numarulTotalDePersoane++;
            if (counter == 10) {
                // Reset counter 
                counter = 0;
                cout << "\nPentru a continua apasa o tasta, pentru a iesi apasa tasta 0 \n";
                string userInput;
                cin >> userInput;
                if (userInput == "0")
                    break;
            }
        }
        cout << "\nNumarul total  de persoane: " << numarulTotalDePersoane << endl;

        string verificaNumele;
        string citesteLinia;
        cout << "\nVerifica un nume daca exista: ";
        cin.ignore();
        getline(cin, verificaNumele);    
        int checkIfNameExists = 0;
        while (getline(myFile, citesteLinia)) { // bug: nu citeste numele de la primul rand, nu  stiu ce are
            if (verificaNumele == citesteLinia) 
            {
                cout << citesteLinia << endl; 
                checkIfNameExists++;
            }
        }
        if (checkIfNameExists == 0) 
        {
            cout << "\nNumele " << verificaNumele << " nu exista!\n";
        }

        myFile.close();
    }

    return 0;
}