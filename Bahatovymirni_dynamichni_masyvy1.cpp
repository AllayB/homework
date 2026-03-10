#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

//void fillVector(vector<int>& v)
//{
//    for (int& x : v)
//        x = rand() % 21 - 10;
//}
//
//void printVector(const vector<int>& v)
//{
//    for (int x : v)
//        cout << x << " ";
//    cout << endl;
//}
//
//void sortAsc(vector<int>& v)
//{
//    sort(v.begin(), v.end());
//}
//
//void mergeDesc(const vector<int>& a, const vector<int>& b, vector<int>& result)
//{
//    result = a;
//
//    result.insert(result.end(), b.begin(), b.end());
//
//    sort(result.begin(), result.end(), greater<int>());
//}
//
//int main()
//{
//    srand(time(0));
//
//    int n, m;
//
//    cout << "Size A: ";
//    cin >> n;
//
//    cout << "Size B: ";
//    cin >> m;
//
//    vector<int> A(n);
//    vector<int> B(m);
//    vector<int> C;
//
//    fillVector(A);
//    fillVector(B);
//
//    cout << "Array A:\n";
//    printVector(A);
//
//    cout << "Array B:\n";
//    printVector(B);
//
//    sortAsc(A);
//    sortAsc(B);
//
//    cout << "Sorted A:\n";
//    printVector(A);
//
//    cout << "Sorted B:\n";
//    printVector(B);
//
//    mergeDesc(A, B, C);
//
//    cout << "Merged array (DESC):\n";
//    printVector(C);
//}

//void convertTo1D(vector<vector<int>>& matrix, vector<int>& result)
//{
//    for (auto& row : matrix)
//        for (int x : row)
//            result.push_back(x);
//}
//
//int main()
//{
//    int rows, cols;
//
//    cout << "Rows: ";
//    cin >> rows;
//
//    cout << "Cols: ";
//    cin >> cols;
//
//    vector<vector<int>> matrix(rows, vector<int>(cols));
//
//    cout << "Enter matrix: ";
//
//    for (int i = 0; i < rows; i++)
//        for (int j = 0; j < cols; j++)
//            cin >> matrix[i][j];
//
//    vector<int> arr1D;
//
//    convertTo1D(matrix, arr1D);
//
//    cout << "1D array: ";
//
//    for (int x : arr1D)
//        cout << x << " ";
//}


bool checkLength(int length)
{
    return length >= 8;
}

void generatePassword(vector<char>& pass, int length)
{
    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lower = "abcdefghijklmnopqrstuvwxyz";
    string digits = "0123456789";
    string symbols = "!@#$%^&*";

    string all = upper + lower + digits + symbols;

    pass.resize(length);

    pass[0] = upper[rand() % upper.size()];
    pass[1] = lower[rand() % lower.size()];
    pass[2] = digits[rand() % digits.size()];
    pass[3] = symbols[rand() % symbols.size()];

    for (int i = 4; i < length; i++)
        pass[i] = all[rand() % all.size()];
}

void printPassword(const vector<char>& pass)
{
    for (char c : pass)
        cout << c;
    cout << endl;
}

int main()
{
    srand(time(0));

    int length;

    cout << "Password length: ";
    cin >> length;

    if (!checkLength(length))
    {
        cout << "Minimum length = 8\n";
        return 0;
    }

    vector<char> password;

    generatePassword(password, length);

    cout << "Generated password:\n";

    printPassword(password);
}




