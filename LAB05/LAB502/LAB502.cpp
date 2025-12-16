#include <iostream>;
#include <cmath>;

using namespace std;

int maxnum(int a,int b, int c) {
	if (a >= b && a >= c) {
		return a;
	} else if (b >= a && b >= c) {
		return b;
	} else {
		return c;
	}
}
int main() {
	int a, b, c;

	cout << "Enter number a: ";
	cin >> a;
	cout << "Enter number b: ";
	cin >> b;
	cout << "Enter number c: ";
	cin >> c;

	int max;
	max = maxnum(a, b, c);
	cout << "The maximum number is: " << max << endl;
	cin.ignore();

	return 0;
}