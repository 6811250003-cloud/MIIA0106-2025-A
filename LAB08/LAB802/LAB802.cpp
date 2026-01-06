#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
    string nickname;
    string lineId;
    string phone;
};

int main() {
    const int SIZE = 5;
    Student students[SIZE]; // Array ของ struct

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        cout << "Student ID: ";
        cin >> students[i].id;
        cout << "Nickname: ";
        cin >> students[i].nickname;
        cout << "Line ID: ";
        cin >> students[i].lineId;
        cout << "Phone Number: ";
        cin >> students[i].phone;
        cout << endl;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Student " << (i + 1) << "\n";
        cout << "ID: " << students[i].id << "\n";
        cout << "Nickname: " << students[i].nickname << "\n";
        cout << "Line ID: " << students[i].lineId << "\n";
        cout << "Phone Number: " << students[i].phone << "\n";
        cout << "----------------------\n";
    }
}