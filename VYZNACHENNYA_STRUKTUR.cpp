#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;



//typedef struct {
//    string surname;
//    string gender;
//    float average;
//} Student;
//
//int main() {
//    int n;
//    cout << "Enter number of students: ";
//    cin >> n;
//
//    vector<Student> group(n);
//
//    for (int i = 0; i < n; i++) {
//        cout << "\nStudent " << i + 1 << endl;
//        cout << "Surname: ";
//        cin >> group[i].surname;
//        cout << "Gender (M/F): ";
//        cin >> group[i].gender;
//        cout << "Average grade: ";
//        cin >> group[i].average;
//    }
//
//    float sumM = 0, sumF = 0;
//    int countM = 0, countF = 0;
//
//    for (const auto& s : group) {
//        if (s.gender == "M") {
//            sumM += s.average;
//            countM++;
//        }
//        else {
//            sumF += s.average;
//            countF++;
//        }
//    }
//
//    float avgM = (countM ? sumM / countM : 0);
//    float avgF = (countF ? sumF / countF : 0);
//
//    cout << "\nAverage grade (boys): " << avgM;
//    cout << "\nAverage grade (girls): " << avgF << endl;
//
//    if (avgM > avgF)
//        cout << "Higher average: boys\n";
//    else if (avgF > avgM)
//        cout << "Higher average: girls\n";
//    else
//        cout << "Averages are equal\n";
//
//    return 0;
//}


//struct CarDetails {
//    string engine;
//    string color;
//    int owners;
//};
//
//struct Car {
//    string brand;
//    string model;
//    int year;
//    float price;
//    bool bargain;
//    CarDetails details;
//};
//
//void inputCars(Car cars[], int n);
//void printCars(Car cars[], int n);
//
//int main() {
//    int n;
//    cout << "Number of cars: ";
//    cin >> n;
//
//    Car* cars = new Car[n];
//
//    inputCars(cars, n);
//    printCars(cars, n);
//
//    delete[] cars;
//    return 0;
//}
//
//void inputCars(Car cars[], int n) {
//    for (int i = 0; i < n; i++) {
//        cout << "\nCar " << i + 1 << endl;
//        cout << "Brand: ";
//        cin >> cars[i].brand;
//        cout << "Model: ";
//        cin >> cars[i].model;
//        cout << "Year: ";
//        cin >> cars[i].year;
//        cout << "Price: ";
//        cin >> cars[i].price;
//        cout << "Bargain (1-yes / 0-no): ";
//        cin >> cars[i].bargain;
//
//        cout << "Engine: ";
//        cin >> cars[i].details.engine;
//        cout << "Color: ";
//        cin >> cars[i].details.color;
//        cout << "Number of owners: ";
//        cin >> cars[i].details.owners;
//    }
//}
//
//void printCars(Car cars[], int n) {
//    cout << "\n\nCar table:\n";
//    cout << left << setw(10) << "Brand"
//        << setw(10) << "Model"
//        << setw(6) << "Year"
//        << setw(10) << "Price"
//        << setw(8) << "Bargain"
//        << setw(10) << "Engine"
//        << setw(10) << "Color"
//        << setw(10) << "Owners" << endl;
//
//    for (int i = 0; i < n; i++) {
//        cout << setw(10) << cars[i].brand
//            << setw(10) << cars[i].model
//            << setw(6) << cars[i].year
//            << setw(10) << cars[i].price
//            << setw(8) << (cars[i].bargain ? "Yes" : "No")
//            << setw(10) << cars[i].details.engine
//            << setw(10) << cars[i].details.color
//            << setw(10) << cars[i].details.owners
//            << endl;
//    }
//}


struct Student {
    string surname;
    string group;
    int marks[5];
};

void addStudent(vector<Student>& students);
void excellentStudents(const vector<Student>& students);
void badStudents(const vector<Student>& students);

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n1 - Add student";
        cout << "\n2 - Excellent students";
        cout << "\n3 - Failing students";
        cout << "\n0 - Exit\n";
        cin >> choice;

        switch (choice) {
        case 1:
            addStudent(students);
            break;
        case 2:
            excellentStudents(students);
            break;
        case 3:
            badStudents(students);
            break;
        }

    } while (choice != 0);

    return 0;
}

void addStudent(vector<Student>& students) {
    Student s;

    cout << "Surname: ";
    cin >> s.surname;
    cout << "Group: ";
    cin >> s.group;

    cout << "Marks (5): ";
    for (int i = 0; i < 5; i++)
        cin >> s.marks[i];

    students.push_back(s); 
}

void excellentStudents(const vector<Student>& students) {
    cout << "\nExcellent students:\n";

    for (const auto& s : students) {
        int count = 0;
        for (int m : s.marks)
            if (m >= 10)
                count++;

        if (count >= 4)
            cout << s.surname << endl;
    }
}

void badStudents(const vector<Student>& students) {
    cout << "\nFailing students:\n";

    for (const auto& s : students) {
        int count = 0;
        for (int m : s.marks)
            if (m <= 3)
                count++;

        if (count >= 3)
            cout << s.surname << endl;
    }
}