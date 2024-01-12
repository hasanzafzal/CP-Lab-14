#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outputFile("output.txt");
    if (!outputFile.is_open()) {
        cout << "Unable to open the file for writing." << endl;
        return 1;
    }
    string textToWrite = "Hello, this is a sample string.";
    outputFile << textToWrite;
    outputFile.close();
    cout << "String has been written to the file successfully." << endl;

    return 0;
}