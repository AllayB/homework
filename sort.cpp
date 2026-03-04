#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//int main() {
//    srand(time(0));
//
//    const int N = 10;
//    int arr[N];
//
//    cout << "Array:\n";
//    for (int i = 0; i < N; i++) {
//        arr[i] = rand() % 21 - 10;  
//        cout << arr[i] << " ";
//    }
//
//    int minIndex = 0, maxIndex = 0;
//
//    for (int i = 1; i < N; i++) {
//        if (arr[i] < arr[minIndex]) minIndex = i;
//        if (arr[i] > arr[maxIndex]) maxIndex = i;
//    }
//
//    int start = min(minIndex, maxIndex);
//    int end = max(minIndex, maxIndex);
//
//    int sum = 0;
//    for (int i = start + 1; i < end; i++)
//        sum += arr[i];
//
//    cout << "Sum between min and max: " << sum << endl;
//
//    int firstNeg = -1, lastNeg = -1;
//
//    for (int i = 0; i < N; i++) {
//        if (arr[i] < 0) {
//            if (firstNeg == -1) firstNeg = i;
//            lastNeg = i;
//        }
//    }
//
//    int diff = 0;
//    if (firstNeg != -1 && lastNeg != -1 && firstNeg != lastNeg) {
//        for (int i = firstNeg + 1; i < lastNeg; i++)
//            diff -= arr[i];
//    }
//
//    cout << "Difference between first and last negative: " << diff << endl;
//
//    return 0;
//}


//int main() {
//    const int N = 5;
//    int a[N] = { 1, -2, 0, 4, -5 };
//    int b[N] = { 0, 3, -1, 2, -4 };
//    int c[10];
//
//    int k = 0;
//
//
//    for (int i = 0; i < N; i++)
//        if (a[i] > 0) c[k++] = a[i];
//
//    for (int i = 0; i < N; i++)
//        if (b[i] > 0) c[k++] = b[i];
//
//
//    for (int i = 0; i < N; i++)
//        if (a[i] == 0) c[k++] = a[i];
//
//    for (int i = 0; i < N; i++)
//        if (b[i] == 0) c[k++] = b[i];
//
//    for (int i = 0; i < N; i++)
//        if (a[i] < 0) c[k++] = a[i];
//
//    for (int i = 0; i < N; i++)
//        if (b[i] < 0) c[k++] = b[i];
//
//    cout << "Result array:";
//    for (int i = 0; i < 10; i++)
//        cout << c[i] << " ";
//
//    return 0;
//}

int main() {
    srand(time(0));

    const int N = 15;
    int a[N];

    for (int i = 0; i < N; i++) {
        a[i] = rand() % 21 - 10;
        cout << a[i] << " ";
    }

    cout << endl;

    double avg = 0;
    for (int i = 0; i < N; i++)
        avg += a[i];

    avg = avg / N;

    int part;

    if (avg > 0)
        part = N * 2 / 3;
    else
        part = N / 3;

    for (int i = 0; i < part - 1; i++) {
        for (int j = 0; j < part - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    int left = part;
    int right = N - 1;

    while (left < right) {
        int temp = a[left];
        a[left] = a[right];
        a[right] = temp;
        left++;
        right--;
    }

    cout << "Result: ";
    for (int i = 0; i < N; i++)
        cout << a[i] << " ";

    return 0;
}