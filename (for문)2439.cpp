#include <iostream>
using namespace std;

int main() {

    int n;

    cin >> n;
    while (n < 1 || n > 100) {
        cin >> n;
    }

    for (int i = 1; i <= n; i++) {
        for (int a = 0; a < n - i; a++) {
            cout << " ";
        }

        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
