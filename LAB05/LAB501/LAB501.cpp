#include <iostream>;
#include <cmath>;

using namespace std;

double calculateArea(double r) {
	const double PI = 3.14159;
	return PI * r * r;
}
double rectangleArea(double x, double y) {
	return x * y;
}

int main() {
	double radius;
	cout << "Enter Radius: ";
	cin >> radius;
	double area = calculateArea(radius);
	cout << "Calculate Area: " << area << endl;

	double length, width;
	cout << "Enter length: ";
	cin >> length;
	cout << "Enter width: ";
	cin >> width;
	double area2 = rectangleArea(length, width);
	cout << "Rectangle Area: " << area2 << endl;
	cin.ignore();

	return 0;
}