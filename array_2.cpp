#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
//
//enum Bank
//{
//    UAH20 = 20,
//    UAH50 = 50,
//    UAH100 = 100,
//    UAH200 = 200,
//    UAH500 = 500
//};
//
//int main()
//{
//    string input;
//    cout << "Enter the denomination(20,50,100,200,500) or last name : ";
//    cin >> input;
//
//    Bank note;
//    bool found = true;
//
//    if (input == "20" || input == "Franko")
//        note = UAH20;
//    else if (input == "50" || input == "Hrushevskyi")
//        note = UAH50;
//    else if (input == "100" || input == "Shevchenko")
//        note = UAH100;
//    else if (input == "200" || input == "Ukrayinka")
//        note = UAH200;
//    else if (input == "500" || input == "Skovoroda")
//        note = UAH500;
//    else
//        found = false;
//
//    if (found)
//    {
//        string name;
//
//        switch (note)
//        {
//            case UAH20: name = "Ivan Franko"; break;
//            case UAH50: name = "Mykhailo Hrushevskyi"; break;
//            case UAH100: name = "Taras Shevchenko"; break;
//            case UAH200: name = "Lesya Ukrainka"; break;
//            case UAH500: name = "Grigory Skovoroda"; break;
//        }
//
//        cout << "denomination: " << (int)note << " грн (" << name << ")" << endl;
//    }
//    else
//        cout << "Error!" << endl;
//
//    return 0;
//}


//int main()
//{
//    const int SIZE = 12;
//    double profit[SIZE];
//
//    srand(time(0));
//
//    cout << "month income: ";
//    for (int i = 0; i < SIZE; i++)
//    {
//        profit[i] = rand() % 10000 / 10.0;
//        cout << "month " << i + 1 << ": " << profit[i] << endl;
//    }
//
//    int start, end;
//    cout << "Enter a range of months (1-12): ";
//    cin >> start >> end;
//
//    start--;
//    end--;
//
//    int maxIndex = start;
//    int minIndex = start;
//
//    for (int i = start; i <= end; i++)
//    {
//        if (profit[i] > profit[maxIndex])
//            maxIndex = i;
//
//        if (profit[i] < profit[minIndex])
//            minIndex = i;
//    }
//
//    cout << "Maximum profit per month: " << maxIndex + 1 << endl;
//    cout << "Minimum profit per month: " << minIndex + 1 << endl;
//
//    return 0;
//}

//int main()
//{
//    const int SIZE = 10;
//    int arr[SIZE];
//
//    srand(time(0));
//
//    cout << "Array: ";
//    for (int i = 0; i < SIZE; i++)
//    {
//        arr[i] = rand() % 21 - 10;
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    int sumNeg = 0;
//    long long productEvenIndex = 1;
//
//    for (int i = 0; i < SIZE; i++)
//    {
//        if (arr[i] < 0)
//            sumNeg += arr[i];
//
//        if (i % 2 == 0)
//            productEvenIndex *= arr[i];
//    }
//
//    cout << "Sum of negatives: " << sumNeg << endl;
//    cout << "Product of elements with even numbers: "
//        << productEvenIndex << endl;
//
//    return 0;
//}