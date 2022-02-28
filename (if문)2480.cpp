#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << 10000 + a * 1000 << endl;
    }
    else if (a == b || b == c || a == c) {
        int i;
        if (a == b || a == c) {
            i = a;
        }
        else if (b == c) {
            i = c;
        }
        
        cout << 1000 + i * 100 << endl;
    }
    else {
        int i;
        if (a < b) {
            i = b;
        }
        else if (a > b) {
            i = a;
        }

        if (i < c) {
            i = c;
        }

        cout << 100 * i << endl;
    }


    return 0;
}
