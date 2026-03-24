#include <iostream>
#include <vector>
using namespace std;

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

    students.push_back(s); // автоматичне розширення
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