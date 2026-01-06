#include <iostream> 
#include <string>
using namespace std;

struct Parent {
	char parentname[20];
	char ralationship[20];
};
struct Phone {
	char home[10];
	char mobile[10];
	char parentmoblie[10];
	char parenthome[10];
};

struct Student {
	char id[9];
	char nickname[20];
	char lineID[20];
	Parent pr;
	Phone tel;
};
void inputStudent(Student& student) {
	cout << "Enter Student Information\n";
	cout << "ID: ";
	cin >> student.id;
	cout << "Name: ";
	cin >> student.nickname;
	cout << "Line ID: ";
	cin >> student.lineID;

	cout << "Mobile Number (mobile): ";
	cin >> student.tel.mobile;
	cout << "Home Number (home): ";
	cin >> student.tel.home;

	cout << "Parent's Name (name): ";
	cin >> student.pr.parentname;
	cout << "Relationship (relationship): ";
	cin >> student.pr.ralationship;

	cout << "Parent's Mobile Number: ";
	cin >> student.tel.parentmoblie;
	cout << "Parent's Home Number: ";
	cin >> student.tel.parenthome;

}
void printStudent(const Student& student) {
	cout << "1. Student Data (Student): " << student.id << "   " << student.nickname << "   " << student.lineID << endl;
	cout << "2. Student Contact Info (Student Phone - myContact): " << student.tel.mobile << "   " << student.tel.home << endl;
	cout << "3. Parent Data (Parent - myParent): " << student.pr.parentname << "   " << student.pr.ralationship << endl;
	cout << "4. Parent Contact Info (Parent Phone - contact): " << student.tel.parentmoblie << "   " << student.tel.parenthome << endl;

}
int main() {
	Student student;
	inputStudent(student);
	printStudent(student);
	return 0;
}