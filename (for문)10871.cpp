#include <iostream>
using namespace std;

int main() {

    int n, x, num;

    cin >> n >> x;

    while (n < 1 || n > 10000) {
        cin >> n;
    }

    while (x < 1 || x > 10000) {
        cin >> x;
    }

    int arr[10000];

    for (int i = 0; i < n; i++) {
        cin >> num;

        while (num < 1 || num > 10000) {
            cin >> num;
        }

        arr[i] = num;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] < x) {
            cout << arr[i] << "\n";
        }
    }

    return 0;
}
