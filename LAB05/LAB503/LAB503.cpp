#include <iostream>
using namespace std;

void changeValue(int a) {
	a = 10;
}
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 10, b = 20;

	cout << "Before swap: ";
	cout << "a = " << a << ", b = " << b << endl;

	changeValue(a);
	cout << "After swap (Call by Value): ";
	cout << "a = " << a << ", b = " << b << endl;

	swap(a, b); 
	cout << "After swap (Call by Reference): ";
	cout << "a = " << a << ", b = " << b << endl;
	cin.ignore();
	
	return 0;
}