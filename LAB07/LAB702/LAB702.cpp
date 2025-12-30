#include <iostream>
using namespace std;

int main() {
    int score = 50;
    int* ptr = &score;

    cout << score << endl;
    cout << *ptr << endl;
    cout << &score << endl;

    return 0;
}
