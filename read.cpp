// Exercitiul 1
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Returneaza nr randului la care liniile sunt diferite
// Argumentele sunt fisierele pe care vrei sa le compari
void comparaFisierele(string file1, string file2) {
    fstream myFile1;
    fstream myFile2;
    myFile1.open(file1, ios::in);
    myFile2.open(file2, ios::in);
    if (myFile1.is_open() && myFile2.is_open()) {
        string lineFile1, lineFile2;
        int counter = 1;
        while (getline(myFile1, lineFile1) && getline(myFile2, lineFile2)) {
            if (lineFile1 != lineFile2) {
                cout << "Liniile de la randul " << counter << " sunt diferite\n";
            }
            counter++;
        }
    }
}

int main() {
    comparaFisierele("muscalu.txt", "darius.txt");
    return 0;
}

/*
fstream myFile;
    myFile.open("muscalu.txt", ios::out); // write in muscalu.txt
    if (myFile.is_open()) {
        myFile << "Text";
        myFile.close();
    }

    myFile.open("muscalu.txt", ios::app); // keep what's in that file and add this muscalu.txt
    if (myFile.is_open()) {
        myFile << "text";
        myFile.close();
    }

    myFile.open("muscalu.txt", ios::in); // read muscalu.txt file
    if (myFile.is_open()) {
        string line;
        while (getline(myFile, line)) {
            cout << line << endl;
        }
        myFile.close();
    }
    */