#include <iostream>
#include <fstream>

using namespace std;

struct adresa
{
    char loc[20];
    char str[40];
    int nr;
};

void citire_adr(adresa& userInput) {
    cout << "\nIntrodu localitatea: ";
    cin >> userInput.loc;
    cout << "\nIntrodu strada: ";
    cin >> userInput.str;
    cout << "\nIntrodu nr: ";
    cin >> userInput.nr;
}

void afisare_adr(adresa& userInput) {
    cout << "\n\nAdresa este: " << userInput.loc << ", " << userInput.str << ", " << userInput.nr << endl;
}

struct pers
{
    char nume[15];
    char prenume[20];
    int an_n;
    adresa adr;
};

void citire_pers(pers& userInput) {
    cout << "Nume: ";
    cin >> userInput.nume;
    cout << "Prenume: ";
    cin >> userInput.prenume;
    cout << "Varsta: ";
    cin >> userInput.an_n;
}

void afisare_pers(pers& userInput) {
    cout << "\n\nNumele: " << userInput.nume << "\nPrenumele" << userInput.prenume << "\nVarsta: " << userInput.an_n;
}

int main()
{
    adresa adresaPers1;
    citire_adr(adresaPers1);
    afisare_adr(adresaPers1);

    pers utilizator;
    citire_pers(utilizator);
    afisare_pers(utilizator);

    return 0;
}