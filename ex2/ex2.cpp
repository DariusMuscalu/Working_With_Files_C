#include <iostream>
#include <string>
#include <fstream>

using  namespace std;

int main() {
    fstream myFile1;
    myFile1.open("NUMERE1.txt", ios::in); // read muscalu.txt file

    // Stores the numbers from file inside line string
    string line;
    if (myFile1.is_open()) {
        while (getline(myFile1, line)) {
            cout << line << endl << endl;
        }   
        myFile1.close();
    }

    fstream myFile2;
    myFile2.open("muscalu2.txt", ios::out);
    string storeNum;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] != ' ') {
            storeNum += line[i];
        }
        else {
            for (int j = 0; j < storeNum.length(); j++) {
                if (storeNum[0] != '-') {
                    if (myFile2.is_open()) {
                        myFile2 << storeNum << " ";
                    }
                }
                storeNum.clear();
            }
        }
    }
    myFile2.close();
    
    return 0;
}
