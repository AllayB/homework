#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;

//int main() {
//    string filename;
//    cout << "Enter file name: ";
//    cin >> filename;
//
//    ifstream file(filename);
//
//    if (!file.is_open()) {
//        cout << "Error: cannot open file\n";
//        return 1;
//    }
//
//    string line;
//    int lineCount = 0;
//    int wordCount = 0;
//
//    while (getline(file, line)) {
//        lineCount++;
//
//        stringstream ss(line);
//        string word;
//
//        while (ss >> word) {
//            wordCount++;
//        }
//    }
//
//    file.close();
//
//    cout << "\nReport:\n";
//    cout << "Lines: " << lineCount << endl;
//    cout << "Words: " << wordCount << endl;
//
//    return 0;
//}

int main() {
    string filename;
    cout << "Enter file name: ";
    cin >> filename;

    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Error: cannot open file\n";
        return 1;
    }

    string line;

    cout << "\nFile content:\n\n";

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}