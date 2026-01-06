#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
    string nickname;
    string lineId;
    string phone;
};

// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s) {
	cout << "Student ID: " << s.id << endl;
	cout << "Nickname" << s.nickname << endl;
	cout << "Line ID: " << s.lineId << endl;
	cout << "Phone Number: " << s.phone << endl;
}

int main() {
    Student s1;

    cout << "=== Input Student 1 ===\n";
    cout << "Student ID: ";
    cin >> s1.id;
    cout << "Nickname: ";
    cin >> s1.nickname;
    cout << "Line ID: ";
    cin >> s1.lineId;
    cout << "Phone Number: ";
    cin >> s1.phone;

	cout << "=== Student 1 Information ===\n";
	printStudent(s1);
    return 0;
}


