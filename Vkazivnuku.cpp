//#include <iostream>
//using namespace std;
//
//int main()
//{
//    const int SIZE = 5;
//    int arr1[SIZE] = { 10, 20, 30, 40, 50 };
//    int arr2[SIZE];
//
//    int* p1 = arr1;
//    int* p2 = arr2; 
//
//    for (int i = 0; i < SIZE; i++)
//    {
//        *p2 = *p1;    
//        p1++;         
//        p2++;
//    }
//
//    cout << "Saved array:" << endl;
//    for (int i = 0; i < SIZE; i++)
//        cout << arr2[i] << " ";
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    const int SIZE = 6;
//    int arr[SIZE] = { 1, 2, 3, 4, 5, 6 };
//
//    int* start = arr;
//    int* end = arr + SIZE - 1;
//
//    while (start < end)
//    {
//        int temp = *start;
//        *start = *end;
//        *end = temp;
//
//        start++; 
//        end--;
//    }
//
//    cout << "Insversed array:" << endl;
//    for (int i = 0; i < SIZE; i++)
//        cout << arr[i] << " ";
//
//    return 0;
//}

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int arr1[SIZE] = { 5, 10, 15, 20, 25 };
    int arr2[SIZE];

    int* p1 = arr1;
    int* p2 = arr2 + SIZE - 1;

    for (int i = 0; i < SIZE; i++)
    {
        *p2 = *p1;  
        p1++;
        p2--;
    }

    cout << "Second array (reversed): ";
    for (int i = 0; i < SIZE; i++)
        cout << arr2[i] << " ";

    return 0;
}