#include <iostream>

using namespace std;


//void limitedFunction(int limit, bool reset = false) {
//    static int counter = 0;   
//
//    if (reset) {
//        counter = 0;
//        cout << "Resetting the counter:\n";
//        return;
//    }
//
//    if (counter < limit) {
//        counter++;
//        cout << "Call ¹" << counter << ": The function was executed successfully.\n";
//    }
//    else {
//        cout << "Challenge limit exceeded!  \n";
//    }
//}
//
//int main() {
//
//    cout << "Function test with limit 3:\n";
//    limitedFunction(3);
//    limitedFunction(3);
//    limitedFunction(3);
//    limitedFunction(3);  
//
//    cout << "\nResetting the counter:\n";
//    limitedFunction(3, true);
//
//    cout << "\nRetest after reset:\n";
//    limitedFunction(3);
//    limitedFunction(3);
//
//    return 0;
//}




//int max1D(int arr[], int size) {
//    int max = arr[0];
//
//    for (int i = 1; i < size; i++)
//        if (arr[i] > max)
//            max = arr[i];
//
//    return max;
//}
//
//int max2D(int arr[][3], int rows, int cols) {
//    int max = arr[0][0];
//
//    for (int i = 0; i < rows; i++)
//        for (int j = 0; j < cols; j++)
//            if (arr[i][j] > max)
//                max = arr[i][j];
//
//    return max;
//}
//
//int main() {
//
//    int a[] = { 5, 8, 2, 9, 1 };
//    cout << "Max 1D = " << max1D(a, 5) << endl;
//
//    int b[2][3] = {
//        {1, 7, 3},
//        {4, 2, 10}
//    };
//
//    cout << "Max 2D = " << max2D(b, 2, 3) << endl;
//
//    return 0;
//}

//int main() {
//
//    string word;
//    cout << "Enter your word: ";
//    cin >> word;
//
//    int letters = 0;
//    int digits = 0;
//    int others = 0;
//
//    for (int i = 0; i < word.length(); i++) {
//
//        if ((word[i] >= 'A' && word[i] <= 'Z') ||
//            (word[i] >= 'a' && word[i] <= 'z')) {
//            letters++;
//        }
//        else if (word[i] >= '0' && word[i] <= '9') {
//            digits++;
//        }
//        else {
//            others++;
//        }
//    }
//
//    cout << "Letters: " << letters << endl;
//    cout << "Numbres: " << digits << endl;
//    cout << "Another symbols: " << others << endl;
//
//    return 0;
//}

int main() {
    string word;
    char ch;

    cout << "enter word: ";
    cin >> word;

    cout << "enter symbol: ";
    cin >> ch;

    int count = 0;

    for (int i = 0; i < word.length(); i++)
        if (word[i] == ch)
            count++;

    if (count > 0)
        cout << "The symbol is found " << count << " time(s).\n";
    else
        cout << "The character is missing in the word.\n";

    return 0;
}