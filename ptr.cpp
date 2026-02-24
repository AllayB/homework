#include <iostream>
using namespace std;

void change(int *n);
void change2(int *n1, int *n2);
int minMax(int* a, int* b);
void SumAr(int* ar, int size = 5);
void parNepar(int *ar, const int size);
void MaxAr(int *ar, int size);



int main()
{
    srand(time(NULL));
    //cout << "Hello World!\n";
    //int a = 5,b=1;
    //cout << a << endl;
    //cout <<"a "<< &a << endl;
    //cout <<"b " << &b << endl;


    ////int* ptr = nullptr;
    ////ptr = &a;
    ////cout <<"ptr " << ptr << endl;

    //int* p = &a;
    //cout << "p " << p << endl;
    //cout << "p *" << *p << endl;
    //p = &b;
    //cout << "p " << p << endl;
    //cout << "p* " << *p << endl;
    //*p = 100;
    //cout << "p* " << *p << endl;
    //cout << b << endl;

    //cout << sizeof(int*) << endl;
    

    //double ar[]{ 4.2, 1.3, 5.1,7.9 };
    //cout << *ar << endl;
    //for (double d : ar) cout << d << ' ';
    //cout << endl;
    //const int len = sizeof(ar) / sizeof(ar[0]);
    //for (int i = 0; i < len; ++i) cout << *(ar+i) << " ";
    //double* p1 = &ar[1];
    //double* p2 = &ar[1];
    //cout << *p1 << endl <<*p2 << endl;
    //int num = 124, num1 = 58;
    //cout << num << ' ' << num1 << endl;
    //change(&num);
    //cout << num << endl;
    //change2(&num, &num1);
    //cout << num << ' '<< num1 << endl;
    //cout << minMax(&num, &num1);
    //const int size = 5;
    //int ar[size];
    //SumAr(ar,size);
    const int size = 6;
    int ar[size];
 /*   parNepar(ar,size);*/
    cout << endl;
    MaxAr(ar, size);

}

void change2(int *n1, int *n2) {
    int t = *n1;
    *n1 = *n2;
    *n2 = t;
}

void change(int *n) {
    *n = 2400;
    //cout << *n;
}

int minMax(int* a, int* b) {
    return (*a < *b) ? *b : *a;
}

void SumAr(int* ar, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        *(ar + i) = rand() % 10;
        cout << *(ar + i)<<' ';
        sum += *(ar + i);
    }
    cout <<endl<< sum;
}

void parNepar(int* ar, const int size) {
    for (int i = 0; i < size; i++) {
        *(ar + i) = 1 + rand() % 20;
        cout << *(ar + i) << ' ';
    }
    cout << endl;

    for (int i = 0; i < size; i += 2) {
        int t = *(ar + i);
        *(ar + i) = *(ar + i + 1);
        *(ar + i + 1) = t;
    }

    for (int i = 0; i < size; i++) {
        cout << *(ar + i) << ' ';
    }
}

void MaxAr(int* ar, int size) {
    for (int i = 0; i < size; i++) {
        *(ar + i) = rand() % 20;
        cout << *(ar + i) << ' ';
    }
    cout << endl;
    int max = *ar;
    for (int i = 1; i < size; i++) {
        if (max < *(ar + i)) max = *(ar + i);
    }
    cout << max;
}