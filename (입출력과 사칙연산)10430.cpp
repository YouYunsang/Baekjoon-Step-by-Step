#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    while (a < 2 || a > 10000) {
        cin >> a;
    }

    while (b < 2 || b > 10000) {
        cin >> b;
    }

    while (c < 2 || c > 10000) {
        cin >> c;
    }

    cout << (a + b) % c << endl;
    cout << ((a % c) + (b % c)) % c << endl;
    cout << (a * b) % c << endl;
    cout << ((a % c) * (b % c)) % c << endl;

    return 0;
}
