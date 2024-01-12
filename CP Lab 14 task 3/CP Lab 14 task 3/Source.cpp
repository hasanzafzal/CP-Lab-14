#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const char* fileName = "example.txt";
    ifstream inputFile(fileName);
    if (!inputFile.is_open()) {
        cout << "Error opening file: " << fileName << endl;
        return 1;
    }
    char ch;
    int charCount = 0;
    while (inputFile.get(ch)) {
        charCount++;
    }
    inputFile.close();
    cout << "Total number of characters in the file: " << charCount << endl;

    return 0;
}