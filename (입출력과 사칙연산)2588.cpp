#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    while (a < 100 || a > 999) {
        cin >> a;
    }

    while (b < 100 || b > 999) {
        cin >> b;
    }
    int num1 = b % 10;
    int num2 = (b % 100 - num1)/10;
    int num3 = (b - (num2 * 10 + num1)) / 100;

    cout << a * num1 << endl;
    cout << a * num2 << endl;
    cout << a * num3 << endl;
    cout << a * b << endl;

    return 0;
}
