#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
    string nickname;
    string lineId;
    string phone;
};

// TODO: swap ????????
void swapStudent(Student& a, Student& b) {
    Student temp = a;
    a = b;
    b = temp;
}

// TODO: sort ???????? (Bubble sort)
void sortByID(Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (students[j].id > students[j + 1].id) {
                swapStudent(students[i], students[j + 1]);
            }
        }
    }
}

void printStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
		cout << "Student " << (i + 1) << ":\n";
		cout << "ID: " << students[i].id << "\n";
		cout << "Nickname: " << students[i].nickname << "\n";
		cout << "Line ID: " << students[i].lineId << "\n";
		cout << "Phone: " << students[i].phone << "\n";
        cout << "----------------------\n";
    }
}
int main() {
    const int SIZE = 5;
    Student students[SIZE];

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
		cout << "ID: " << students[i].id;
		cin >> students[i].id;
		cout << "Nickname: " << students[i].nickname;
		cin >> students[i].nickname;
		cout << "Line ID: " << students[i].lineId;
		cin >> students[i].lineId;
		cout << "Phone: " << students[i].phone;
		cin >> students[i].phone;
        cout << endl;
    }
    sortByID(students, SIZE);
    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}
