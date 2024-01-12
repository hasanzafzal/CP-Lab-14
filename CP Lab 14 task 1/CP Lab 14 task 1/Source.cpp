#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("example.txt");
    if (!file.is_open()) {
        cout << "Unable to open the file." << endl;
        return 1;
    }
    char character;
    while (file.get(character)) {
        cout << character;
    }
    file.close();

    return 0;
}