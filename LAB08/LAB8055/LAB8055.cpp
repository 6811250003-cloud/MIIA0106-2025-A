#include <iostream>
using namespace std;

struct Address {
    int number;
    char road[20];
    char district[20];
    char province[20];

};

struct Phone {
    char home[10];
    char mobile[10];
};

struct Student {
    char id[9];
    char name[20];
    char surname[20];
    Address adr;
    Phone ph;
};

int main() {
    Student s1;

	cout << "Enter Student Information\n";
    cout << "ID: "; cin >> s1.id;
    cout << "Name: "; cin >> s1.name;
    cout << "Surname: "; cin >> s1.surname;

    cout << "\nEnter Address Information\n";
    cout << "Address - House Number: ";
    cin >> s1.adr.number;
    cout << "Address - Road: ";
    cin >> s1.adr.road;
    cout << "Address - District: ";
    cin >> s1.adr.district;
    cout << "Address - Province: ";
    cin >> s1.adr.province;
    cout << "Phone - Home: ";
    cin >> s1.ph.home;
    cout << "Phone - Mobile: ";
    cin >> s1.ph.mobile;

    cout << "\n===== Output =====\n";
    cout << "ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Surname: " << s1.surname << endl;

    cout << "\n===== Address =====\n";
    cout << "Address House: " << s1.adr.number << endl;
    cout << "Address Road: " << s1.adr.road << endl;
    cout << "Address District: " << s1.adr.district << endl;
    cout << "Address Province: " << s1.adr.province << endl;

	cout << "\n===== Phone =====\n";
    cout << "Phone Home: " << s1.ph.home << endl;
    cout << "Phone Mobile: " << s1.ph.mobile << endl;

    return 0;
}
