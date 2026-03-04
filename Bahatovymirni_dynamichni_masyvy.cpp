#include <iostream>
using namespace std;


//¹3

//int* insertBlock(int* arr, int size, int* block, int blockSize, int index) {
//
//    int* newArr = new int[size + blockSize];
//    int j = 0;
//
//    for (int i = 0; i < index; i++)
//        newArr[j++] = arr[i];
//
//    for (int i = 0; i < blockSize; i++)
//        newArr[j++] = block[i];
//
//    for (int i = index; i < size; i++)
//        newArr[j++] = arr[i];
//
//    return newArr;
//}
//
//int main() {
//
//    int n;
//    cout << "Enter size of array: ";
//    cin >> n;
//
//    int* arr = new int[n];
//
//    cout << "Enter elements of array:\n";
//    for (int i = 0; i < n; i++)
//        cin >> arr[i];
//
//    int blockSize;
//    cout << "Enter size of block to insert: ";
//    cin >> blockSize;
//
//    int* block = new int[blockSize];
//
//    cout << "Enter elements of block:\n";
//    for (int i = 0; i < blockSize; i++)
//        cin >> block[i];
//
//    int index;
//    cout << "Enter index to insert block: ";
//    cin >> index;
//
//    int* newArr = insertBlock(arr, n, block, blockSize, index);
//
//    cout << "Result array:\n";
//    for (int i = 0; i < n + blockSize; i++)
//        cout << newArr[i] << " ";
//
//    delete[] arr;
//    delete[] block;
//    delete[] newArr;
//
//    return 0;
//}

//¹4

int main() {

    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
        arr[i] = new int[cols];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> arr[i][j];

    int pos;
    cout << "Enter position to insert new column (0..." << cols << "): ";
    cin >> pos;

    int* column = new int[rows];
    cout << "Enter elements of new column:\n";
    for (int i = 0; i < rows; i++)
        cin >> column[i];

    int** newArr = new int* [rows];
    for (int i = 0; i < rows; i++)
        newArr[i] = new int[cols + 1];

    for (int i = 0; i < rows; i++) {

        int k = 0;

        for (int j = 0; j < pos; j++)
            newArr[i][k++] = arr[i][j];

        newArr[i][k++] = column[i];

        for (int j = pos; j < cols; j++)
            newArr[i][k++] = arr[i][j];
    }

    cout << "Result matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols + 1; j++)
            cout << newArr[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
        delete[] newArr[i];
    }

    delete[] arr;
    delete[] newArr;
    delete[] column;

    return 0;
}