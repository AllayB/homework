#include <iostream>
#include <string>
using namespace std;

//bool isValidIP(string ip) {
//
//    int num = 0;
//    int dots = 0;
//    int digits = 0;
//
//    for (int i = 0; i <= ip.length(); i++) {
//
//        if (ip[i] >= '0' && ip[i] <= '9') {
//            num = num * 10 + (ip[i] - '0');
//            digits++;
//
//            if (num > 255)
//                return false;
//        }
//        else if (ip[i] == '.' || ip[i] == '\0') {
//
//            if (digits == 0)
//                return false;
//
//            dots++;
//            num = 0;
//            digits = 0;
//        }
//        else
//            return false;
//    }
//
//    return dots == 4;
//}
//
//int main() {
//
//    string ip;
//    cout << "Enter IP: ";
//    cin >> ip;
//
//    if (isValidIP(ip))
//        cout << "Correct IP\n";
//    else
//        cout << "Incorrect IP\n";
//
//    return 0;
//}


//int main() {
//
//    string names[5];
//
//    cout << "Enter 5 surnames:\n";
//    for (int i = 0; i < 5; i++)
//        cin >> names[i];
//
//    for (int i = 0; i < 4; i++)
//        for (int j = 0; j < 4 - i; j++)
//            if (names[j] < names[j + 1]) {
//                string temp = names[j];
//                names[j] = names[j + 1];
//                names[j + 1] = temp;
//            }
//
//    cout << "\nSorted:\n";
//    for (int i = 0; i < 5; i++)
//        cout << names[i] << endl;
//
//    return 0;
//}


//int main() {
//
//    char str[100];
//    char ch;
//
//    cout << "Enter word: ";
//    cin.getline(str, 100);
//
//    cout << "Enter symbol: ";
//    cin >> ch;
//
//    int count = 0;
//
//    for (int i = 0; str[i] != '\0'; i++)
//        if (str[i] == ch)
//            count++;
//
//    cout << "Count = " << count << endl;
//
//    return 0;
//}


//int main() {
//
//    string text;
//    cout << "Enter text: ";
//    getline(cin, text);
//
//    string word = "", longest = "";
//
//    for (int i = 0; i <= text.length(); i++) {
//
//        if (text[i] != ' ' && text[i] != '\0')
//            word += text[i];
//        else {
//            if (word.length() > longest.length())
//                longest = word;
//            word = "";
//        }
//    }
//
//    cout << "Longest word: " << longest << endl;
//
//    return 0;
//}


//int main() {
//
//    string text, oldWord, newWord;
//
//    cout << "Enter text: ";
//    getline(cin, text);
//
//    cout << "Word to replace: ";
//    cin >> oldWord;
//
//    cout << "New word: ";
//    cin >> newWord;
//
//    int pos = text.find(oldWord);
//
//    while (pos != string::npos) {
//        text.replace(pos, oldWord.length(), newWord);
//        pos = text.find(oldWord);
//    }
//
//    cout << "Result: " << text << endl;
//
//    return 0;
//}

int main() {

    char str[100];
    cout << "Enter word: ";
    cin.getline(str, 100);

    int length = 0;
    while (str[length] != '\0')
        length++;

    bool isPalindrome = true;

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "Palindrome\n";
    else
        cout << "Not palindrome\n";

    return 0;
}