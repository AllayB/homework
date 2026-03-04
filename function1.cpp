#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//void sortArray(int a[], int n) {
//    int mid = n / 2;
//
//    for (int i = 1; i < mid; i++) {
//        int key = a[i];
//        int j = i - 1;
//
//        while (j >= 0 && a[j] < key) {
//            a[j + 1] = a[j];
//            j--;
//        }
//        a[j + 1] = key;
//    }
//
//    for (int i = mid + 1; i < n; i++) {
//        int key = a[i];
//        int j = i - 1;
//
//        while (j >= mid && a[j] > key) {
//            a[j + 1] = a[j];
//            j--;
//        }
//        a[j + 1] = key;
//    }
//}
//
//int main() {
//    int a[] = { 5, 2, 8, 1, 9, 3, 7, 4 };
//    int n = 8;
//
//    sortArray(a, n);
//
//    for (int i = 0; i < n; i++)
//        cout << a[i] << " ";
//
//    return 0;
//}



//void sortBetweenNegatives(int a[], int n) {
//    int left = -1, right = -1;
//
//    for (int i = 0; i < n; i++) {
//        if (a[i] < 0) {
//            if (left == -1)
//                left = i;
//            right = i;
//        }
//    }
//
//    if (left == -1 || left == right)
//        return;
//
//    for (int i = left + 1; i < right; i++)
//        for (int j = left + 1; j < right - (i - left - 1); j++)
//            if (a[j] > a[j + 1]) {
//                int temp = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = temp;
//            }
//}
//
//int main() {
//    srand(time(0));
//
//    const int N = 10;
//    int a[N];
//
//    for (int i = 0; i < N; i++) {
//        a[i] = rand() % 41 - 20;
//        cout << a[i] << " ";
//    }
//
//    cout << endl;
//
//    sortBetweenNegatives(a, N);
//
//    for (int i = 0; i < N; i++)
//        cout << a[i] << " ";
//
//    return 0;
//}


//int binarySearch(int a[], int n, int key) {
//    int left = 0;
//    int right = n - 1;
//
//    while (left <= right) {
//        int mid = (left + right) / 2;
//
//        if (a[mid] == key)
//            return mid;
//        else if (a[mid] < key)
//            left = mid + 1;
//        else
//            right = mid - 1;
//    }
//
//    return -1;
//}
//
//int main() {
//    int a[] = { 1, 3, 5, 7, 9, 11 };
//    int n = 6;
//
//    for (int i = 0; i < n; i++) { cout << a[i] << " "; }
//    cout << endl;
//
//    cout << "what number index u want to find?: ";
//    int key;
//    cin >> key;
//
//    int pos = binarySearch(a, n, key);
//
//    if (pos != -1)
//        cout << "Found at position: " << pos;
//    else
//        cout << "Not found";
//
//    return 0;
//}


//int sumDigits(int n) {
//    if (n == 0)
//        return 0;
//    return n % 10 + sumDigits(n / 10);
//}
//
//int main() {
//    int n;
//    cin >> n;
//
//    cout << sumDigits(n);
//
//    return 0;
//}


void printReverse(int start, int end) {
    if (start == end) {
        cout << start << " ";
        return;
    }

    if (start > end) {
        cout << start << " ";
        printReverse(start - 1, end);
    }
    else {
        cout << end << " ";
        printReverse(start, end - 1);
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    printReverse(a, b);

    return 0;
}